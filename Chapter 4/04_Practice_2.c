#include <stdio.h>

int main()
{
    // TODO: Write a program to sum first ten natural numbers using while loop.


    int i=1, sum = 0, n = 10;

    while(i<=n){
        sum+=i;
        i++;
        
    }
    printf("The value of sigma 1 to 10 is %d", sum);

    return 0;
}