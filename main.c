#include <stdlib.h>
#include <stddef.h>
// #include <curses.h>
#include "Utils/utils.h"

int main()
{
    IntArr* int_arr = get_int_array();
    print_int_arr(int_arr->length, int_arr->arr);

    print_max(get_max(int_arr));

    return EXIT_SUCCESS;
}