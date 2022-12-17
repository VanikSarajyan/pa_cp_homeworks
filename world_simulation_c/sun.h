#ifndef SUN_H
#define SUN_H

struct Sun;

struct Sun * sun_init();
void sun_construct(struct Sun *);
void sun_destruct(struct Sun *);

void rise(struct Sun *);
void set(struct Sun *);
int is_shining(struct Sun *);
void update_status(struct Sun *);
void sun_print_status(struct Sun *);

#endif