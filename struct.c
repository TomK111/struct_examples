#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

int create_data( struct create_my_data *p_name) {
    p_name->first_name = (char*)malloc(sizeof(char)*50);
    p_name->last_name = (char*)malloc(sizeof(char)*50);

    if(p_name->first_name == NULL || p_name->last_name == NULL){
        printf("Memory could not be allocated. Exiting program...");
        return EXIT_FAILURE;
    };
}

void print_data(struct create_my_data *p_name){
    strcpy(p_name->first_name, "Tomislav\0");
    strcpy(p_name->last_name, "Kraljic\0");
    printf("My name is %s %s",p_name->first_name, p_name->last_name);
};

void free_data(struct create_my_data *p_name){
    free(p_name->first_name);
    free(p_name->last_name);
};
