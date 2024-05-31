#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();
int main()
{
    goodMorning();
    goodAfternoon();
    goodNight();
    return 0;
}
void goodMorning()
{
    printf("Good Morning\n");
}
void goodAfternoon()
{
    printf("Good Afternoon\n");
}
void goodNight()
{
    printf("Good Night\n");
}

// --> Execution of a C program starts from main()
// --> A  C program can have more than one function
// --> Every function gets called directly or indirectly from main().
// --> There are two types of functions in C lets talk about them.