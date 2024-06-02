#include <stdio.h>
#include <string.h>
int main()
{
    char *st1[45] = "Salik";
    char st2[45] = "Naik";
    strcat(st1, st2);
    printf("Now the st1 is %s", st2);

    return 0;
}