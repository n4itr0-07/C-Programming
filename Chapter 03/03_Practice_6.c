//FIXME: Write a C program that reads a student's score (an integer between 0 and 100) and determines their grade based on the following criteria:
// A: 90-100
// B: 80-89
// C: 70-79
// D: 60-69
// F: 0-59

#include <stdio.h>

int main() {
    int score;

    // Prompt user for input
    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    // Check for invalid score
    if (score < 0 || score > 100) {
        printf("Invalid score! Score must be between 0 and 100.\n");
    }
    // Check for grade A
    else if (score >= 90 && score <= 100) {
        printf("Your grade is A.\n");
    }
    // Check for grade B
    else if (score >= 80 && score <= 89) {
        printf("Your grade is B.\n");
    }
    // Check for grade C
    else if (score >= 70 && score <= 79) {
        printf("Your grade is C.\n");
    }
    // Check for grade D
    else if (score >= 60 && score <= 69) {
        printf("Your grade is D.\n");
    }
    // If none of the above, the grade is F
    else {
        printf("Your grade is F.\n");
    }

    return 0;
}

