#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 90)
    {
        printf("You are above 90,you can't drive");
    }
    else
    {
        printf("You can drive &");
    }
    if (age == 50)
    {
        printf("Half Century");
    }
    return 0;
}

// TODO: == --> Equals , >= --> Greater than or equal to, <= --> Less than or equal to, != --> Greater than or equal to Not equal to.

// FIXME: Important Note :- '=' is used for assignment where as '==' is used for equality check.
