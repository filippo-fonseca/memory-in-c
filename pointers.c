#include <stdio.h>

typedef struct Coordinate
{
    int x;
    int y;
    int z;
} coordinate_t;

coordinate_t new_coord(int x, int y, int z)
{
    coordinate_t c = {x, y, z};

    return c;
};

void scale_coordinate(coordinate_t *c, int scale_factor)
{
    printf("the pointer to c: %p\n", c);
    printf("the value at pointer c: %d, %d, %d\n", (*c).x, (*c).y, (*c).z);
    c->x *= scale_factor; // equivalent to (*c).x
    (*c).y *= scale_factor;
    (*c).z *= scale_factor;
};

int main()
{
    printf("Hello, World!\n");
    coordinate_t the_call = new_coord(2, 3, 5);
    coordinate_t *the_call_ptr = &the_call;

    printf("the_call: x=%d, y=%d, z=%d\n", the_call.x, the_call.y, the_call.z);
    scale_coordinate(the_call_ptr, 3);
    printf("post: x=%d, y=%d, z=%d\n", the_call.x, the_call.y, the_call.z);

    printf("size of coordinate_t: %lu\n", sizeof(coordinate_t));
    // print the size of coordinate_t.x
    printf("size of coordinate_t.x: %lu\n", sizeof(the_call.x));

    return 0;
}