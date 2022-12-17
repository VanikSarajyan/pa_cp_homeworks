#include <stdio.h>
#include <stdlib.h>

typedef struct Air {
    int volume;
} Air;

Air * air_init(){
    return (Air*)malloc(sizeof(Air));
}

void air_construct(Air * a, int volume){
    a->volume = volume;
}

void air_destruct(Air * a){
    free(a);
}

void increase(Air * a, int volume){
    a->volume += volume;
}

void decrease(Air * a, int volume){
    a->volume -= volume;
}

void air_print_status(Air * a){
    printf("Air volume is %d.\n", a->volume);
}