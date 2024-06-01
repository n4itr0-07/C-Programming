#include <stdio.h>

int main()
{
    // TODO: For Int Values

    int i = 34;
    int *ptr = &i;
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);

    // TODO: For Float Values

    float f = 34.5;
    float *ptr = &f;
    printf("The value of fptr is %u\n", ptr);
    ptr++;
    printf("The value of fptr is %u\n", ptr);

    // TODO: For char values

    char c = 'a';
    char *ptr = &c;
    printf("The value of cptr is %u\n", ptr);
    ptr++;
    printf("The value of cptr is %u\n", ptr);
    return 0;
}