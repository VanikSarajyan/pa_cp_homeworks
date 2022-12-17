#ifndef AIR_H
#define AIR_H

struct Air;

struct Air * air_init();
void air_construct(struct Air *, int volume);
void air_destruct(struct Air *);

void increase(struct Air *, int volume);
void decrease(struct Air *, int volume);
int get_volume(struct Air *);
void air_print_status(struct Air *);

#endif
