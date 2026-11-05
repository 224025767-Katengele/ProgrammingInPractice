#include <stdio.h>

int main()
{
    char studentName[50];
    float test1, test2, assignment;
    float total;

    printf("========== STUDENT GRADE EVALUATOR ==========\n\n");

    printf("Enter student name: ");
    if (scanf("%49s", studentName) != 1)
    {
        printf("Invalid student name.\n");
        return 1;
    }

    printf("Enter Test 1 mark: ");
    if (scanf("%f", &test1) != 1 || test1 < 0 || test1 > 100)
    {
        printf("Invalid mark! Enter a value between 0 and 100.\n");
        return 1;
    }

    printf("Enter Test 2 mark: ");
    if (scanf("%f", &test2) != 1 || test2 < 0 || test2 > 100)
    {
        printf("Invalid mark! Enter a value between 0 and 100.\n");
        return 1;
    }

    printf("Enter Assignment mark: ");
    if (scanf("%f", &assignment) != 1 || assignment < 0 || assignment > 100)
    {
        printf("Invalid mark! Enter a value between 0 and 100.\n");
        return 1;
    }

    total = test1 + test2 + assignment;

    printf("\n---------------------------------\n");
    printf("Student Name : %s\n", studentName);
    printf("Test 1       : %.2f\n", test1);
    printf("Test 2       : %.2f\n", test2);
    printf("Assignment   : %.2f\n", assignment);
    printf("Total        : %.2f / 300\n", total);
    printf("---------------------------------\n");

    if (total >= 225 && total <= 300)
    {
        printf("Result: Distinction\n");
    }
    else if (total >= 180)
    {
        printf("Result: Credit\n");
    }
    else if (total >= 150)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    printf("---------------------------------\n");

    return 0;
}