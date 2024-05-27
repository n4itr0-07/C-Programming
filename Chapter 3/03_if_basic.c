// TODO: C program to check whether a number is a odd or even
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a % 2 == 0)

    {
        printf("%d is an even number\n", a);
    }
    //FIXME: Else block is optional
    
    else
    {
        printf("%d is an odd number\n", a);
    }

    return 0;
}

//TODO: C program to check a number is a even number or odd