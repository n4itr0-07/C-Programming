// TODO: Write a function sum vector which returns the sum of two vectors passed to it. The vectors must be two - dimensional.

#include <stdio.h>
#include <string.h>

struct vector
{
    int x;
    int y;
};

struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{

    struct vector v1, v2, sum;
    v1.x = 10;
    v1.y = 20;
    printf("X dim is %d and Y dim is %d \n", v1.x, v1.y);
    v2.x = 100;
    v2.y = 2000;
    printf("X dim is %d and Y dim is %d \n", v2.x, v2.y);

    sum = sumVector(v1, v2);
    printf("X dim is %d and Y dim is %d \n", sum.x, sum.y);

    return 0;
}