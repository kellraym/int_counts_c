#include <stddef.h>
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 64

typedef struct IntArr
{
    int *arr;
    size_t length;
} IntArr;

void print_int_arr(size_t length, int* arr)
{
    for (int i = 0; i < length; ++i)
    {
        if (i == length - 1)
        {
            printf("%d\n", arr[i]);
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }
}

int get_int(char* s)
{
    int factor = 1;
    int res = 0;
    for (int i = strlen(s) - 1; i >= 0; --i)
    {
        if (s[i] < 48 || s[i] > 57)
        {
            return 0;
        }
        res += (factor * (s[i] - 48));
        factor *= 10;
    }
    return res;
}

IntArr* get_int_array()
{
    size_t length = 0;
    char *c;
    int *int_arr = malloc(BUFFER_SIZE * sizeof(int));
    system("clear");
    printf("Enter next number or q to quit: ");
    while(1)
    {
        c = malloc(BUFFER_SIZE * sizeof(char));
        scanf("%s", c);
        for (int i = 0; i < strlen(c); ++i)
        {
            if (!(strcmp(c, "q")) || !(strcmp(c, "Q")) || length == BUFFER_SIZE)
            {
                goto endfunc;
            }
            else if (c[i] < 48 || c[i] > 57) 
            {
                goto skip;
            }
        }
        int_arr[length] = get_int(c);
        length++;
        system("clear");
        printf("Your array so far: ");
        print_int_arr(length, int_arr);
        printf("Enter next number or q to quit: ");
        continue;
        skip:
            system("clear");
            printf("Your array so far: ");
            print_int_arr(length, int_arr);
            printf("Please enter a number: ");
    }
    endfunc:
    system("clear");
        printf("Have a nice day!\n");
        free(c);
        IntArr* res = malloc(sizeof(IntArr));
        res->arr = int_arr;
        res->length = length;
        return res;
}