#include <stdio.h>

int main()
{
    float a, b, c;

    //TODO Prompt user for input
    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side a: ");
    scanf("%f", &a);
    printf("Side b: ");
    scanf("%f", &b);
    printf("Side c: ");
    scanf("%f", &c);

    //TODO Check for non-positive side lengths
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid side length! Sides must be positive numbers.\n");
    }
    //TODO Check for the triangle inequality theorem
    else if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Invalid triangle! The given lengths do not form a triangle.\n");
    }
    //TODO Check for equilateral triangle
    else if (a == b && b == c)
    {
        printf("The triangle is equilateral.\n");
    }
    //TODO Check for isosceles triangle
    else if (a == b || b == c || a == c)
    {
        printf("The triangle is isosceles.\n");
    }
    //TODO If none of the above, it must be a scalene triangle
    else
    {
        printf("The triangle is scalene.\n");
    }

    return 0;
}
