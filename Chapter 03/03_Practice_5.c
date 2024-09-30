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

/* 
 Explanation:
Prompt for Input:
The program starts by asking the user to enter the lengths of the three sides of a triangle.

Check for Non-Positive Side Lengths:
The first if statement checks if any of the side lengths are non-positive (less than or equal to zero). If true, it prints an error message.

Check for Triangle Inequality Theorem:
The next else if statement checks if the sum of any two sides is less than or equal to the third side, which would make it impossible to form a triangle. If true, it prints an error message.

Check for Equilateral Triangle:
The subsequent else if statement checks if all three sides are equal. If true, it prints "The triangle is equilateral."

Check for Isosceles Triangle:
Another else if statement checks if any two sides are equal. If true, it prints "The triangle is isosceles."

Check for Scalene Triangle:
The final else statement handles the case where none of the previous conditions are met, meaning all three sides are different. It prints "The triangle is scalene."
 */