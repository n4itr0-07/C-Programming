// TODO:Write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include <stdio.h>

int main()
{
    int mul[10];
    for (int i = 0; i < 10; i++)
    {
        mul[i] = 30 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("30X%d = %d\n", i + 1, mul[i]);
    }

    return 0;
}