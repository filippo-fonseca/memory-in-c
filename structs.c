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
}

int main()
{
    printf("Hello, World!\n");
    struct Coordinate the_call = new_coord(2, 3, 5);

    printf("Coordinate: (%d, %d, %d)\n", the_call.x, the_call.y, the_call.z);
    return 0;
}