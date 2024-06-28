#include <stddef.h>
#include "../IntArr/int_arr.h"

typedef struct Max
{
    int val;
    int ind;
} Max;

// TODO: make this take an IntArr
Max* get_max(IntArr* int_arr)
{
    int m = int_arr->arr[0];
    int ind = 0;
    for (int i = 0; i < int_arr->length; i++)
    {
        if (int_arr->arr[i] >int_arr->arr[ind])
        {
            m = int_arr->arr[i];
            ind = i;
        }
    }
    Max* res = malloc(sizeof(Max));
    res->val = m;
    res->ind = ind;
    return res;
}

IntArr* get_count_arr(IntArr* int_arr)
{
    IntArr* res = malloc(sizeof(IntArr));
    Max* max1 = get_max(int_arr);
    res->arr = calloc(max1->val + 1, sizeof(int));
    res->length = max1->val + 1;
    free(max1);
    for (int i = 0; i < int_arr->length; ++i)
    {
        res->arr[int_arr->arr[i]]++;
    }
    return res;
}

void print_max(Max* m) {
    printf("Val: %d\n", m->val);
    printf("Ind: %d\n", m->ind);
}