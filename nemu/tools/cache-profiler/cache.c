#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
FILE* itrace = NULL;
FILE* dtrace = NULL;
#define BRAM_NUM 8
#define BRAM_WIDTH 16 // 16B
#define BRAM_DEPTH 64
#define BRAM_SIZE BRAM_WIDTH * BRAM_DEPTH // 16B * 64
#define CACHELINE_SIZE BRAM_WIDTH
#define ICACHE_NUM 4
#define DCACHE_NUM BRAM_NUM - ICACHE_NUM
#define ICACHE_SIZE BRAM_SIZE * ICACHE_NUM
#define DCACHE_SIZE BRAM_SIZE * DCACHE_NUM
#define ICACHE_GROUP 2
#define DCACHE_GROUP 2
typedef struct cache_model{
    int cache_size;
    int cacheline_size;
    int group_num;
    int cacheline_num;
    int cache_miss_num;
    int cache_hit_num;
    int *tag;// record tag
} cachemodel;
cachemodel *icache = NULL;
cachemodel *dcache = NULL;
void set_cache(cachemodel *cache, int size, int cacheline_size, int group_num){
    cache->cache_size = size;
    cache->cacheline_size = cacheline_size;
    cache->group_num = group_num;
    cache->cacheline_num = size / cacheline_size / group_num;
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
    set_cache(icache, ICACHE_SIZE, CACHELINE_SIZE, ICACHE_GROUP);
    set_cache(dcache, DCACHE_SIZE, CACHELINE_SIZE, DCACHE_GROUP);
}

int main(){
    // test icache
    // test dcache
    init_model();
    fclose(itrace);
    fclose(dtrace);
    return 0;
}