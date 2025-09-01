#include <stdio.h>

struct Coordinate
{
    int x;
    int y;
    int z;
};

struct Coordinate new_coord(int x, int y, int z)
{
    struct Coordinate c = {x, y, z};

    return c;
};

struct Coordinate scale_coordinate(struct Coordinate c, int scale_factor)
{
    c.x *= scale_factor;
    c.y *= scale_factor;
    c.z *= scale_factor;
    return c;
};

int main()
{
    printf("Hello, World!\n");
    struct Coordinate the_call = new_coord(2, 3, 5);
    struct Coordinate the_scaled_call = scale_coordinate(the_call, 3);

    printf("the_call: x=%d, y=%d, z=%d\n", the_call.x, the_call.y, the_call.z);
    printf("the_scaled_call: x=%d, y=%d, z=%d\n", the_scaled_call.x, the_scaled_call.y, the_scaled_call.z);
    printf("post: x=%d, y=%d, z=%d\n", the_call.x, the_call.y, the_call.z);

    return 0;
}