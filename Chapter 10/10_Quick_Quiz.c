// TODO: Modify the above to check whether the file exists or not before opening the file.

#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;

    ptr = fopen("test.txt", "r");
    if (ptr == NULL)
    {
        printf("Error opening file\n");
    }
    else
    {

        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);

        fclose(ptr);

        printf("The value of num is %d\n", num);
        printf("The value of num2 is %d\n", num2);
    }

    return 0;
}