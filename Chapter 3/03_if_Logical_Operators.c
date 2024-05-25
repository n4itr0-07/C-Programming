#include <stdio.h>

int main()
{
    int age;
    int vipPass = 1;
    printf("Enter your age: ");
    scanf("%d", &age);
    if ((age <= 70 && age >= 18) || vipPass == 1)
    {
        printf("You are above 18 and below 70, can drive");
    }
    else{
        printf("You cannot  drive &");
    }
    // if (age == 50)
    // {
    //     printf("Half Century");
    // }
    return 0;
}

// TODO: &&, || and ! are three logical operators in C. These are read as "AND", "OR",and "NOT". They are used to provide logic to our C programs.

// FIXME: && --> AND --> is true when both the conditions are true.

// TODO: "1 and 0" is evaluated as false.
// TODO: "0 and 0" is evaluated as false.
// TODO: "1 and 1" is evaluated as true.

//TODO: || --> OR --> is true when atleast one of the conditions is true (1 or 0 -->1) (1 or 1 --> !)

//TODO: ! --> Returns true if given false and false if given true.