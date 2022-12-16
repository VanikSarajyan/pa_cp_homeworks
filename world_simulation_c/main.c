#include "sun.h"
#include <unistd.h>

int main() {
    struct Sun * p_s = sun_init();
    construct(p_s);

    while (1){
        update_status(p_s);
        print_status(p_s);
        sleep(1);
    }
    
    destruct(p_s);
}