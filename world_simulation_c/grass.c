#include "sun.h"
#include "grass.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Grass {
    int quantity;
    int grow_rate;
} Grass;

Grass * grass_init(){
    return (Grass*)malloc(sizeof(Grass));
}

void grass_construct(Grass * g, int quantity, int grow_rate){
    g->quantity = quantity;
    g->grow_rate = grow_rate;
}

void grass_destruct(Grass * g){
    free(g);
}

void grow(Grass * g, struct Sun * s){
    if(is_shining(s)){
        g->quantity += g->grow_rate;
    }
}

int give_grass(Grass * g, int quantity){
    g->quantity -= quantity;
    return quantity;
}

void grass_print_status(Grass * g){
    printf("Grass quantity is %d.\n", g->quantity);
}