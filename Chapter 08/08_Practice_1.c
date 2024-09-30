// TODO: Write a program to take string as an input from the user using %c and %s . Confirm that the strings are equal.

#include <stdio.h>

int main()
{
    char st1[34];
    char st2[34];
    char c;
    int i = 0;

    printf("Enter the value of first string \n");

    scanf("%s", st1);
    printf("Enter the value of second string character by character \n");
    // fflush(stdin);

    // scanf("%c", &c);

    while (c != '\n')
        fflush(stdin);
    {
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i] = '\0';
    printf("The value of st1 is %s", st1);
    printf("The value of st2 is %s", st2);
    return 0;
}