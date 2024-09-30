#include <stdio.h>
#include <math.h>
int main()
{
    // TODO: Write a program to check whether a number is prime or not using loop

    int n = 4, prime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0 && n!=2)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is  a prime number");
    }
    return 0;
}