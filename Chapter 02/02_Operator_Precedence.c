#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;

    printf("The vale of 3*x - 8*y is %d \n", 3 * x - 8 * y);

    // TODO: OPERATOR PRECEDENCE IN C LANGUAGE

    // FIXME: In C Language simple Mathematic rules like ( BODMAS ), no longer applies

    printf("The value of 8*y / 3*x is %d \n", 8 * y / 3 * x);

    /* 8*3 / 3*x will give wrong answer
    24/3*2
    8 * 2
    16*/

    return 0;
}