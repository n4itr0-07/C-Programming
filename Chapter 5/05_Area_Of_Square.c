#include <stdio.h>

int main()
{
    int side;
    printf("Enter the value of side:\n");
    scanf("%d", &side);
    printf("The value of area is %f\n", pow(side, 2));
    return 0;
}