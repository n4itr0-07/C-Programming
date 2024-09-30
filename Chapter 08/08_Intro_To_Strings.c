#include <stdio.h>

int main()
{
    // char str[] = {'S','A','L','I','K','\0'};
    char str[] = {"Salik"}; // TODO: Null Character adds automatically.
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c\n", *ptr);
        ptr++;
    }
    return 0;
}