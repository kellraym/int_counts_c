#ifndef MAX_H
#define MAX_H

#include <stddef.h>
#include "max.c"

typedef struct Max Max;

Max* get_max(IntArr*);
IntArr* get_count_arr(IntArr*);
void print_max(Max*);

#endif