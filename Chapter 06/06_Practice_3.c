// TODO: Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main()

#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}
int main()
{
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;
    sumAndAvg(i, j, &sum, &avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of average is %f\n", avg);

    return 0;
}