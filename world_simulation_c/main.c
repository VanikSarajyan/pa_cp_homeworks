#include "sun.h"
#include "air.h"
#include <unistd.h>

int main() {
    struct Sun * p_sun = sun_init();
    struct Air * p_air = air_init();

    sun_construct(p_sun);
    air_construct(p_air, 100);

    while (1){
        update_status(p_sun);
        sun_print_status(p_sun);
        air_print_status(p_air);
        sleep(1);
    }
    
    sun_destruct(p_sun);
    air_destruct(p_air);
}