#include "struct.h"
#include <stdlib.h>

int main() {

    struct create_my_data full_name;

    struct create_my_data *p_name = &full_name;

    create_data(p_name);

    print_data(p_name);

    free_data(p_name);

    return EXIT_SUCCESS;
};
