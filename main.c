#include <stdlib.h>
#include <stddef.h>
// #include <curses.h>
#include "Utils/utils.h"

int main()
{
    IntArr* int_arr = get_int_array();
    print_int_arr(int_arr->length, int_arr->arr);

    // print_max(get_max(int_arr));
    IntArr* count_arr = get_count_arr(int_arr);
    print_int_arr(count_arr->length, count_arr->arr);

    return EXIT_SUCCESS;
}