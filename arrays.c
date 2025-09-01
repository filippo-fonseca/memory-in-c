#include <stdio.h>
#include <stdlib.h>

typedef struct ArrayList
{
    int *values;
    int len;
} array_t;

void add_elem(array_t *array, int elem)
{
    array->values[array->len] = elem;
    array->len++;
};

int main()
{

    int *values = malloc(10 * sizeof(int));

    array_t array = {.values = values, .len = 0};

    add_elem(&array, 8);
    add_elem(&array, 9);

    printf("%d\n", array.values[0]);
    printf("%d\n", array.values[1]);

    return 0;
}