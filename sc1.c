#include <stdio.h>
int main()
{
    int n, i, j;
    int roll[100];
    char name[100][50];
    float marks[100][3], total, average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %49[^\n]", name[i]);

        total = 0;

        for (j = 0; j < 3; j++)
        {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%f", &marks[i][j]);
            total = total + marks[i][j];
        }

        average = total / 3;

        printf("Total Marks = %.2f\n", total);
        printf("Average Marks = %.2f\n", average);

        if (average >= 90)
            printf("Grade: A+\n");
        else if (average >= 80)
            printf("Grade: A\n");
        else if (average >= 70)
            printf("Grade: B\n");
        else if (average >= 60)
            printf("Grade: C\n");
        else if (average >= 40)
            printf("Grade: D\n");
        else
            printf("Grade: F (Fail)\n");
    }

    printf("\nStudent Grades Management Completed!\n");

    return 0;
}