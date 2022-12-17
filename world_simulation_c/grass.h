#ifndef GRASS_H
#define GRASS_H

#include "sun.h"

struct Grass;

struct Grass * grass_init();
void grass_construct(struct Grass *, int quantity, int grow_rate);
void grass_destruct(struct Grass *);

void grow(struct Grass *, struct Sun *);
int give_grass(struct Grass *, int quantity);
int get_quantity(struct Grass *);
void grass_print_status(struct Grass *);

#endif