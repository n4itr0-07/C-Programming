#include <stdio.h>

int main()
{
    int tax = 0, income;
    
    printf("Enter your income\n");
    scanf("%d", &income);

    if (income >= 250000 && income <= 250000)
    {
        tax = tax + 0.05 * (income - 250000);
    }

    if (income >= 50000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 50000);
    }

     if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
        printf("Your income tax to be paid by 26th of this month is  %d\n", tax);
    }

    return 0;
}