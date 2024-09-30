#include <stdio.h>
// TODO: Write a program to print the value of the variable. Use this address to get the value of this variable
int main()
{
    int a;
    int *ptr;
    ptr = &a;
    printf("The address of variable a is %u\n", ptr);
    printf("The The value  of variable a is %d\n", *ptr);
    return 0;
}