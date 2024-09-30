#include <stdio.h>
#include <string.h>
int main()
{
    char st1[45] = "Salik";
    char st2[45] = "Naik";
    int val = strcmp(st1, st2);
    printf("Now the value  is %d", val);
    return 0;
}