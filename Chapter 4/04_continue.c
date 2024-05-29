#include <stdio.h>

int main()
{
    int skip = 5;
    int i = 0;

    while (i < 10)
    {
        i++;
        if (i != skip)
        {
            continue;
        }
        else
        {
            printf("%d \n", i);
        }
    }
    return 0;
}

// TODO: The Continue statement in C

// The continue statement is used to immediately move to the next iteration of the loop.
// The control is taken to the next iteration thus skipping  everything below "continue" inside the loop for that iteration.
