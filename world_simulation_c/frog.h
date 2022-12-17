#ifndef FROG_H
#define FROG_H

#include "grass.h"
#include "air.h"
#include "sun.h"

struct Frog;

struct Frog * frog_init();

void frog_construct(struct Frog *);
void frog_destruct(struct Frog *);

void breathe(struct Frog *, struct Air *);
void eat(struct Frog *, struct Grass *);
int is_sleeping(struct Frog *);
void sleep_update(struct Frog *, struct Sun *);
void frog_print_status(struct Frog *);

#endif