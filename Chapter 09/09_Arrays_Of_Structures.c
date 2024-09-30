#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 10000;
    strcpy(facebook[0].name, "Salik");

    facebook[1].code = 101;
    facebook[1].salary = 100.40;
    strcpy(facebook[1].name, "Atif");

    facebook[2].code = 102;
    facebook[2].salary = 2000.20;
    strcpy(facebook[2].name, "Talha");
    printf("Done");
    return 0;
}