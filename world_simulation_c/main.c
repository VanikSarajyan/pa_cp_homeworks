#include "sun.h"
#include "air.h"
#include "grass.h"
#include <unistd.h>

int main() {
    struct Sun * p_sun = sun_init();
    struct Air * p_air = air_init();
    struct Grass * p_grass = grass_init();

    sun_construct(p_sun);
    air_construct(p_air, 100);
    grass_construct(p_grass, 100, 3);

    while (1){
        update_status(p_sun);

        sun_print_status(p_sun);
        air_print_status(p_air);
        grass_print_status(p_grass);

        grow(p_grass, p_sun);
        
        sleep(1);
    }
    
    sun_destruct(p_sun);
    air_destruct(p_air);
    grass_destruct(p_grass);
}