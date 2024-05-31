// TODO: Recursion

// A function defined in C can call itself. This is called recursion.
// A function calling itself is also called 'recursive' function.

// FIXME: Example of Recursion
//  A very good example of recursion is factorial

/*
factorial (n) = 1 * 2 * 3 .....*n
factorial (n) = 1 * 2 * 3 ...n-1 *n
factorial (n) = factorial (n-1) *n

Since we can write factorial of  a number in terms of itself, we can program it using recursion.
*/

#include <stdio.h>
int factorial(int x);
int main()
{
int a = 3;
printf("The value of factorial %d is %d", a, factorial(a));
    return 0;
}
int factorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}