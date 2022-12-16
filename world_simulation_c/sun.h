#ifndef SUN_H
#define SUN_H

struct Sun;

void construct(struct Sun *);
struct Sun * sun_init();
void destruct(struct Sun *);

void rise(struct Sun *);
void set(struct Sun *);
int is_shining(struct Sun * s);
void update_status(struct Sun * s);
void print_status(struct Sun * s);

#endif