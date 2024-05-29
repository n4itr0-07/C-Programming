#include <stdio.h>

int main()
{
    // TODO: Quiz Quiz : Write a program to print n natural numbers in reverse order.

    int n;
    printf("Enter the value of the n \n");
    scanf("%d", &n);

    for (int i = n; i; i--)
    {
        printf("The value of i is %d \n", i);
    }
    return 0;
}