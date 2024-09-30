#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[20];
} emp;

int main()
{
    // Declaring ptr and e1
    emp e1;
    emp *ptr;

    ptr = &e1;
    // set the member value for e1
    ptr->code = 101;
    ptr->salary = 10000.2;
    strcpy(ptr->name, "Salik");

    return 0;
}