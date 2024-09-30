#include <stdio.h>

int main()
{
    int n_subjects = 3;
    int n_students = 5;

    int marks[3][5];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n_students; j++)
        {
            printf("Enter marks of subject %d for student %d\n: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
            // scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n_students; j++)
        {
            printf("The  marks of student %d for subject %d is : %d\n", i + 1, j + 1, marks[i][j]);
            // scanf("%d", &marks[i][j]);
            // scanf("%d", &marks[i][j]);
        }
    }
    return 0;
}