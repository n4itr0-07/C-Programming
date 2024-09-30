#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};
void show(struct employee emp)
{
    printf("the code of employee is : %d \n", emp.code);
    printf("The salary Of Employee is : %f \n", emp.salary);
    printf("The Name Of EMployee is : %s \n", emp.name);
}

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 101; or you can also write :
    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name,  "Salik");
    show(e1);

    return 0;
}