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

coordinate_t scale_coordinate(coordinate_t c, int scale_factor)
{
    c.x *= scale_factor;
    c.y *= scale_factor;
    c.z *= scale_factor;
    return c;
};

int main()
{
    printf("Hello, World!\n");
    coordinate_t the_call = new_coord(2, 3, 5);
    coordinate_t the_scaled_call = scale_coordinate(the_call, 3);

    printf("the_call: x=%d, y=%d, z=%d\n", the_call.x, the_call.y, the_call.z);
    printf("the_scaled_call: x=%d, y=%d, z=%d\n", the_scaled_call.x, the_scaled_call.y, the_scaled_call.z);
    printf("post: x=%d, y=%d, z=%d\n", the_call.x, the_call.y, the_call.z);

    return 0;
}