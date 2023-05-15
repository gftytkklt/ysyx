#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>

// bram spec, size measured in bytes
#define BRAM_NUM 8
#define BRAM_WIDTH 16 // 16B
#define BRAM_DEPTH 64
#define BRAM_SIZE (BRAM_WIDTH * BRAM_DEPTH) // 16B * 64
#define CACHELINE_SIZE BRAM_WIDTH
#define ICACHE_NUM 4
#define DCACHE_NUM 4
//#define DCACHE_NUM (BRAM_NUM - ICACHE_NUM)
#define ICACHE_SIZE (BRAM_SIZE * ICACHE_NUM)
#define DCACHE_SIZE (BRAM_SIZE * DCACHE_NUM)
#define ICACHE_GROUP 4
#define DCACHE_GROUP 2
#define ICACHE_CACHELINENUM (ICACHE_SIZE / CACHELINE_SIZE)
#define DCACHE_CACHELINENUM (DCACHE_SIZE / CACHELINE_SIZE)
#define ICACHE_INDEXNUM (ICACHE_CACHELINENUM / ICACHE_GROUP)
#define DCACHE_INDEXNUM (DCACHE_CACHELINENUM / DCACHE_GROUP)

// addr flag
#define OFFSET_MASK 0x0000000f // 16: 4 bits
#define OFFSET_BIAS 0

// cacheism strategy
// cache write
//#define WRITE_THROUGH
//#define WRITE_BACK
// cache replace
//#define ALWAYS_ZERO
//#define RANDOM

// cache profile
typedef struct {
    int cache_size;
    int cacheline_size;
    int group_num;
    int index_num;
    int cache_miss_num;
    int cache_hit_num;
    int **tag;// record tag
    unsigned index_mask;
    unsigned index_bitnum;
    bool **valid_flag;
    bool **dirty_flag;// dcache only
} cachemodel;

cachemodel *icache = NULL;
cachemodel *dcache = NULL;
FILE* itrace = NULL;
FILE* dtrace = NULL;

void set_cache(cachemodel *cache){
    bool is_icache = (cache == icache) ? true : false;
    cache->cache_size = is_icache ? ICACHE_SIZE : DCACHE_SIZE;
    cache->cacheline_size = CACHELINE_SIZE;
    cache->group_num = is_icache ? ICACHE_GROUP : DCACHE_GROUP;
    int cacheline_num = is_icache ? ICACHE_CACHELINENUM : DCACHE_CACHELINENUM;
    cache->index_num = is_icache ? ICACHE_INDEXNUM : DCACHE_INDEXNUM;
    cache->tag = (int**)malloc(cacheline_num*sizeof(int*));
    cache->valid_flag = (bool**)malloc(cacheline_num*sizeof(bool*));
    cache->dirty_flag = (bool**)malloc(cacheline_num*sizeof(bool*));
    for(int i = 0;i<cache->group_num;i++){
        (cache->tag)[i] = (int*)malloc(cacheline_num*sizeof(int));
        memset((cache->tag)[i],0,cacheline_num*sizeof(int));
        (cache->valid_flag)[i] = (bool*)malloc(cacheline_num*sizeof(bool));
        memset((cache->valid_flag)[i],0,cacheline_num*sizeof(bool));
        (cache->dirty_flag)[i] = (bool*)malloc(cacheline_num*sizeof(bool));
        memset((cache->dirty_flag)[i],0,cacheline_num*sizeof(bool));
    }
    unsigned index_mask = cache->index_num - 1;
    cache->index_mask = index_mask;
    while(index_mask != 0){
        index_mask = index_mask >> 1;
        cache->index_bitnum += 1;
    }
    cache->cache_miss_num = 0;
    cache->cache_hit_num = 0;
}

void mem_write(cachemodel *cache, unsigned index, unsigned tag){
    //cache->cache_hit_num++;
    for(int i=0;i<cache->group_num;i++){
        if(cache->valid_flag[i][index] == false){
            cache->tag[i][index] = tag;
            cache->valid_flag[i][index] = true;
            cache->dirty_flag[i][index] == true;
            return;
        }
    }
    unsigned group = rand()%DCACHE_GROUP;
    if(cache->dirty_flag[group][index] == true){
        cache->cache_miss_num++;// additional mem wr
    }
    cache->tag[group][index] = tag;
}

// simple write through
void cache_write(cachemodel *cache, unsigned addr){
    cache->cache_hit_num++;
    unsigned offt = addr & OFFSET_BIAS;
    unsigned index = (addr >> 4) & (cache->index_mask);
    unsigned tag = (addr >> (4 + cache->index_bitnum));
    //bool cache_hit = false;
    for(int i=0;i<cache->group_num;i++){
        if((cache->valid_flag[i][index] == true) && (cache->tag[i][index] == tag) && (cache->valid_flag[i][index] == false)){
            //cache_hit = true;
            //cache->cache_hit_num++;
            cache->dirty_flag[i][index] == true;
            return;
        }
    }
    //cache->cache_miss_num++;
    mem_write(cache, index, tag); 
}

void mem_read(cachemodel *cache, unsigned index, unsigned tag){
    char cache_flag = (cache==icache) ? 'i' : 'd';
    for(int i=0;i<cache->group_num;i++){
        if(cache->valid_flag[i][index] == false){
            cache->tag[i][index] = tag;
            cache->valid_flag[i][index] = true;
            return;
        }
    }
    unsigned group_num = (cache_flag=='i') ? ICACHE_GROUP : DCACHE_GROUP;
    unsigned group = rand()%group_num;
    if(cache->dirty_flag[group][index] == true){
        cache->cache_miss_num++;// additional mem wr
        cache->dirty_flag[group][index] = false;
    }
    cache->tag[group][index] = tag;
}

void cache_read(cachemodel *cache, unsigned addr){
    unsigned offt = addr & OFFSET_BIAS;
    unsigned index = (addr >> 4) & (cache->index_mask);
    unsigned tag = (addr >> (4 + cache->index_bitnum));
    bool cache_hit = false;
    for(int i=0;i<cache->group_num;i++){
        if((cache->valid_flag[i][index] == true) && (cache->tag[i][index] == tag)){
            cache_hit = true;
            cache->cache_hit_num++;
            return;
        }
    }
    cache->cache_miss_num++;
    mem_read(cache, index, tag); 
}

void init_model(){
    itrace = fopen("itrace.txt","r");
    assert(itrace);
    dtrace = fopen("dtrace.txt","r");
    assert(dtrace);
    icache = (cachemodel*)malloc(sizeof(cachemodel));
    assert(icache);
    dcache = (cachemodel*)malloc(sizeof(cachemodel));
    assert(dcache);
    set_cache(icache);
    set_cache(dcache);
}

void free_model(){
    if(itrace) fclose(itrace);
    if(dtrace) fclose(dtrace);
    if(icache) free(icache);
    if(dcache) free(dcache);
}

void cache_profile(cachemodel* cache, int data_num){
    unsigned hit_num = cache->cache_hit_num;
    unsigned miss_num = cache->cache_miss_num;
    float hit_rate = (float)hit_num / (float)data_num * 100;
    const char cache_type = (cache == icache) ? 'i' : 'd';
    printf("%ccache info:\n",cache_type);
    printf("%dKB %d way(s) cache, %d %dB cachelines\n",cache->cache_size/1024, cache->group_num, cache->index_num, cache->cacheline_size);
    printf("query mem %d times, cache hit: %d, cache miss: %d, hit rate: %.2f%%\n",data_num, hit_num, miss_num, hit_rate);
    int shift_num = 4 + cache->index_bitnum;
    for(int i=0;i<cache->index_num;i++){
        printf("index %d ",i+1);
        for(int j=0;j<cache->group_num;j++){
            int cached_addr = (cache->tag[j][i] << shift_num) + (i<<4);
            printf("%d %x  ",cache->valid_flag[j][i],cached_addr);
        }
        printf("\n");
    }
}

int main(){
    // test icache
    // test dcache
    init_model();
    char buf[128];
    char type;
    unsigned addr;
    unsigned inst_num = 0;
    unsigned data_num = 0;
    while(fgets(buf, 128, itrace)!=NULL){
        sscanf(buf, "%*c %x",&addr);
        cache_read(icache, addr);
        inst_num ++;
    }
    while(fgets(buf, 128, dtrace)!=NULL){
        sscanf(buf, "%c %x",&type, &addr);
        switch (type)
        {
        case 'r':
            cache_read(dcache, addr);
            break;
        case 'w':
            cache_write(dcache,addr);
            break;
        default:
            assert(0);
            break;
        }
        data_num ++;
    }
    cache_profile(icache, inst_num);
    cache_profile(dcache, data_num);
    free_model();
    return 0;
}
