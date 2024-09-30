#include <stdio.h>

int main()
{
    int principal = 100, rate = 4, year = 1;
    int simpleintrest = (principal * rate * year) / 100;

    printf("The value eof simple intrest is %d", simpleintrest);

    return 0;
}