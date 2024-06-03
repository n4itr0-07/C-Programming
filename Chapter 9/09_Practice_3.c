// TODO: Create an array of 5 complete numbers created in previous problem and display them with the help of a display function. The values must be taken as an input from the user.

// #include <stdio.h>
// #include <string.h>

// typedef struct complex
// {
//     int real;
//     int complex;
// } comp;
// void display(comp c)
// {
//     printf("The value of real part is %d\n", c.real);
//     printf("The value of imaginary part is %d\n", c.complex);
// }
// int main()
// {
//     comp cnums[5];
//     for (int i = 0; i < 5; i)
//     {
//         printf("Enter the real value for %d num\n", i + 1);
//         scanf("%d", &cnums[i].real);

//         printf("Enter the complex  value for %d num\n", i + 1);
//         scanf("%d", &cnums[i].complex);
//     }

//     for (int i = 0; i < 5; i)
//     {
//         display(cnums[i]);
//     }

//     return 0;
// }

#include <stdio.h>

typedef struct complex
{
    int real;
    int imaginary;
} comp;

void display(comp c)
{
    printf("The value of real part is %d\n", c.real);
    printf("The value of imaginary part is %d\n", c.imaginary);
}

int main()
{
    comp cnums[5];

    for (int i = 0; i < 5; i++) // Increment i in the loop
    {
        printf("Enter the real value for %d num: ", i + 1);
        scanf("%d", &cnums[i].real);

        printf("Enter the imaginary value for %d num: ", i + 1);
        scanf("%d", &cnums[i].imaginary);
    }

    for (int i = 0; i < 5; i++) // Increment i in the loop
    {
        display(cnums[i]);
    }

    return 0;
}
