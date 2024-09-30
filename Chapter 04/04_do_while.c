#include <stdio.h>

int main()
{
    //TODO: write a program to print first n natural numbers using do-while loop.
    // input : 4
    // output : 1 2 3 4 
    int i = 0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    do{
        printf("The number is %d \n", i+i);
        i++;

    }while(i<n);
    // int i = 0;
    // do
    // {
    //     printf("The value of i is %d", i);
    //     i++;
    // } while (i < 10);
    return 0;
}