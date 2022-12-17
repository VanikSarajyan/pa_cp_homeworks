#include "sun.h"
#include "frog.h"
#include "air.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Frog {
    int asleep;
    int fed;
} Frog;

Frog * frog_init(){
    return (Frog*)malloc(sizeof(Frog));
}

void frog_construct(Frog * f){
    f->asleep = 0;
    f->fed = 0;
}

void frog_destruct(Frog * f){
    free(f);
}

int is_sleeping(Frog * f){
    return f->asleep;
}

void sleep_update(Frog * f, struct Sun * s){
    if(is_shining(s)){
        f->asleep = 0;
        f->fed -= 0.5;
    } else {
        f->asleep = 1;
        f->fed = 0;
    }
}

void breathe(Frog * f, struct Air * a){
    decrease(a, 1);
}

void eat(Frog * f, struct Grass * g){
    if(!is_sleeping(f)){
        f->fed += give_grass(g, 1);
    }
}

void frog_print_status(Frog * f){
    if(is_sleeping(f)){
        printf("Sleeping.\n");
    } else {
        printf("Awake.\n");
    }
    printf("Fed by %d \n.", f->fed);
}