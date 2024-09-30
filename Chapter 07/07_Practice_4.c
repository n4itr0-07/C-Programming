// // TODO: Create an array of size 3*10 containing multiplication tables of the numbers 2 , 7 and 9 respectively.

// #include <stdio.h>

// int main()
// {
//     int mulTable[3][10];
//     for (int i = 0; i < 10; i++)
//     {
//         mulTable[0][i] = 2 * (i + 1);
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("2X%d = %d\n", i + 1, mulTable[0][i]);
//     }

//     for(int i=0; i<10; i++){
//         mulTable[0][i] = 7 * (i + 1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("7X%d = %d\n", i + 1, mulTable[0][i]);
//     }
//    for (int i = 0; i < 10; i++)
//     {
//         mulTable[1][i] = 9 * (i + 1);
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("9X%d = %d\n", i + 1, mulTable[0][i]);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int mulTable[3][10];

    // FIXME: Filling the multiplication table for 2
    for (int i = 0; i < 10; i++)
    {
        mulTable[0][i] = 2 * (i + 1);
    }

    //FIXME:  Filling the multiplication table for 7
    for (int i = 0; i < 10; i++)
    {
        mulTable[1][i] = 7 * (i + 1);
    }

    // FIXME: Filling the multiplication table for 9
    for (int i = 0; i < 10; i++)
    {
        mulTable[2][i] = 9 * (i + 1);
    }

    // FIXME: Printing the multiplication table for 2
    for (int i = 0; i < 10; i++)
    {
        printf("2X%d = %d\n", i + 1, mulTable[0][i]);
    }

    // FIXME: Printing the multiplication table for 7
    for (int i = 0; i < 10; i++)
    {
        printf("7X%d = %d\n", i + 1, mulTable[1][i]);
    }

    // FIXME: Printing the multiplication table for 9
    for (int i = 0; i < 10; i++)
    {
        printf("9X%d = %d\n", i + 1, mulTable[2][i]);
    }

    return 0;
}
