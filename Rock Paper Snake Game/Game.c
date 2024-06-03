#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakeWaterGun(char you, char comp)
{
    // TODO:  Return 1 if you win -1 if you lose and 0 if draw.
    // TODO:  Condition for draw

    // TODO: Case Covered :
    // SS
    // GG
    // WW

    if (you == comp)
    {
        return 0;
    }

    // TODO: Not Draw Conditions
    // if (you == 's' && comp == 'w')
    // {
    //     return 1;
    // }
    // elseif(you == 'w' && comp == 's')
    // {
    //     return -1;
    // }
    // TODO: Case Covered :
    // SG
    // GS
    // SW
    // WS
    // GW
    // WG

    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if(you == 'g' && comp == 's')
    {
        return 1;
    }

    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;

    // comp = 's';
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 & number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Enter S For Snake, W For Water And G For Gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    if (result == 0)
    {
        printf("Game Draw!\n");
    }
    else if (result == 1)
    {
        printf("You win!\n");
    }
    else
    {
        printf("You Lose!\n");
    }
    printf("You Choose %c & Computer Choose %c\n", you, comp);
    return 0;
}