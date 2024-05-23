#include <stdio.h>
#include <math.h>
int main()
{

    // TODO: z = b * a ; =>legal
    // TODO: z = b / a ; =>legal
    // TODO: z = b / a ; =>legal

    int a = 4;
    int b = 8;
    printf("The value of a + b = %d\n", a + b);
    printf("The value of a - b = %d\n", a - b);
    printf("The value of a * b = %d\n", a * b);
    printf("The value of a / b = %d\n", a / b);

    /* %  =====>  Modular Divisor Operator
       %  =====> Returns The Remainder
       %  =====> Can't APply On Float
       */
    printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);

    // No Operator is assumed to be present

   // printf("The value of 4 * 5 iss %D\n", (4)(5));    // TODO: wrong operator
  //printf("The value of 4 * 5 iss %d\n", (4) * (5)); // TODO: Correct operator
    printf("The value of 4 * 5 iss %d\n", 4 * 5);     // FIXME: Correct Operators

    // There IS n operator to preform exponentiation in C

   // printf | ("The value of 4 ^ 5 is %d\n", 4 ^ 5);             // TODO: Wrong Operators
    printf("The value of 4 to the power 5 is %d\n", pow(2, 5)); // TODO: Correct Operators

    return 0;
}