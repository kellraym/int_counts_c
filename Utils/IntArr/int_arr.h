#ifndef INT_ARR_H
#define INT_ARR_H

#include <stddef.h>
#include "int_arr.c"

typedef struct IntArr IntArr;

void print_int_arr(size_t, int*);
int get_int(char*);
IntArr* get_int_array();

#endif