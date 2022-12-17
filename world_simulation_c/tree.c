#include "sun.h"
#include "air.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Tree {
    int production_rate;
} Tree;

Tree * tree_init(){
    return (Tree*)malloc(sizeof(Tree));
}

void tree_construct(Tree * t, int production_rate){
    t->production_rate = production_rate;
}

void tree_destruct(Tree * t){
    free(t);
}

void produce_air(Tree * t, struct Sun * s, struct Air * a){
    if(is_shining(s)){
        increase(a, t->production_rate);
    }
}

