#include <stdio.h>

int main()
{
    int marks1, marks2, marks3, roll_number;
    printf("Enter your roll number: ");
    if (scanf("%d", &roll_number) != 1)
    {
        printf("Error: Invalid roll number input.\n");
        return 1;
    }

    printf("Enter marks for 3 subjects (0-100):\n");
    printf("Subject 1: ");
    if (scanf("%d", &marks1) != 1 || marks1 < 0 || marks1 > 100)
    {
        printf("Error: Invalid marks for Subject 1. Marks should be between 0 and 100.\n");
        return 1;
    }

    printf("Subject 2: ");
    if (scanf("%d", &marks2) != 1 || marks2 < 0 || marks2 > 100)
    {
        printf("Error: Invalid marks for Subject 2. Marks should be between 0 and 100.\n");
        return 1;
    }

    printf("Subject 3: ");
    if (scanf("%d", &marks3) != 1 || marks3 < 0 || marks3 > 100)
    {
        printf("Error: Invalid marks for Subject 3. Marks should be between 0 and 100.\n");
        return 1;
    }

    int total_marks = marks1 + marks2 + marks3;
    float percentage = ((float)total_marks / 300) * 100;

    printf("\n=== Result for Roll Number %d ===\n", roll_number);
    printf("Subject 1: %d/100\n", marks1);
    printf("Subject 2: %d/100\n", marks2);
    printf("Subject 3: %d/100\n", marks3);
    printf("Total Marks: %d/300\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 40)
    {
        if (marks1 >= 33 && marks2 >= 33 && marks3 >= 33)
        {
            printf("Result: PASS\n");
        }
        else
        {
            printf("Result: FAIL (Failed in one or more subjects)\n");
        }
    }
    else
    {
        printf("Result: FAIL (Percentage below 40%%)\n");
    }
    return 0;
}
