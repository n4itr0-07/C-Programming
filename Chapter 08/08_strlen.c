#include <stdio.h>
#include <string.h>  //TODO: After adding this header file complier will not show any error.
int main()
{
    char *st = "Salik";
    int a = strlen(st);
    printf("The length of string st is %d", a);
    // FIXME: This code will run but will show errors in compiler. For that we use <string .h> header file.
    return 0;
}