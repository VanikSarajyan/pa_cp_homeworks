#ifndef TREE_H
#define TREE_H

#include "sun.h"
#include "air.h"

struct Tree;

struct Tree * tree_init();
void tree_construct(struct Tree *, int production_rate);
void tree_destruct(struct Tree *);

void produce_air(struct Tree *, struct Sun *, struct Air *);

#endif
