#include <stdio.h>
// SUm is a function whuch takes a and b as input and returns an integer as an output.

int sum(int a, int b); // Function prototype declaration
int main()
{
    c = sum(2, 5); // Function call
    printf("The value of c is %d\n", c);

    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
