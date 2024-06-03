#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee Salik = {100, 34.23, "Salik"};
    printf("code is : %d \n", Salik.code);
    printf("salary is : %f \n", Salik.salary);
    printf("name is : %s \n", Salik.name);

    return 0;
}