#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "sun.h"

typedef struct Sun {
    int rise_time;
    int set_time;
    int rise_start;
    int set_start;
    int shines;
} Sun;

Sun * sun_init(){
    return (Sun*)malloc(sizeof(Sun));
}

void sun_construct(Sun * s){
    s->rise_time = 12;
    s->set_time = 12;
    rise(s);
}

void sun_destruct(Sun * s){
    free(s);
}

void rise(Sun * s){
    s->shines = 1;
    s->rise_start = time(NULL);
    
}

void set(Sun * s){
    s->shines = 0;
    s->set_start = time(NULL);
}

int is_shining(Sun * s){
    return s->shines;
}

void update_status(Sun * s){
    int current_time = time(NULL);
    if(s->shines){
        if(current_time - s->rise_start >= s->rise_time){
            set(s);
        }
    } else {
        if(current_time - s->set_start >= s->set_time){
            rise(s);
        }
    }
}

void sun_print_status(Sun * s){
    int current_time = time(NULL);
    if(s->shines){
        printf("Sun is shining for %d seconds.\n", current_time - s->rise_start);
    } else {
        printf("Sun is set for %d seconds.\n", current_time - s->set_start);
    }
}
