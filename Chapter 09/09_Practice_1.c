// TODO: Create two dimensional vector using structures in C.

#include <stdio.h>
#include <string.h>

struct vector
{
    int x;
    int y;
};
int main()
{

    struct vector v1, v2;
    v1.x = 10;
    v1.y = 20;
    printf("X dim is %d and Y dim is %d \n", v1.x, v1.y);

    return 0;
}