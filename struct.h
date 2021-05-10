#ifndef STRUCT_PROJECT_STRUCT_H
#define STRUCT_PROJECT_STRUCT_H

#include <stdio.h>

struct create_my_data {
    char * first_name;
    char * last_name;
};

int create_data(struct create_my_data * p_name);

void print_data(struct create_my_data * p_name);

void free_data(struct create_my_data * p_name);


#endif //STRUCT_PROJECT_STRUCT_H
