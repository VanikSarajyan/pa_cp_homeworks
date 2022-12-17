#include "sun.h"
#include "air.h"
#include "tree.h"
#include "frog.h"
#include "grass.h"
#include <unistd.h>

int main() {
    struct Sun * p_sun = sun_init();
    struct Air * p_air = air_init();
    struct Grass * p_grass = grass_init();
    struct Tree * p_tree = tree_init();
    struct Frog * p_frog = frog_init();

    sun_construct(p_sun);
    air_construct(p_air, 100);
    grass_construct(p_grass, 100, 3);
    tree_construct(p_tree, 3);
    frog_construct(p_frog);

    while (1){
        update_status(p_sun);

        sun_print_status(p_sun);
        air_print_status(p_air);
        grass_print_status(p_grass);
        frog_print_status(p_frog);

        sleep_update(p_frog, p_sun);
        grow(p_grass, p_sun);
        produce_air(p_tree, p_sun, p_air);
        eat(p_frog, p_grass);

        sleep(1);
    }
    
    sun_destruct(p_sun);
    air_destruct(p_air);
    grass_destruct(p_grass);
    tree_destruct(p_tree);
    frog_destruct(p_frog);
}