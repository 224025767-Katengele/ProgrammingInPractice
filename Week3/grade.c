#include <stdio.h>

int main()
{
    char studentName[50];
    float test1, test2, assignment;
    float total;

    printf("========== STUDENT GRADE EVALUATOR ==========\n\n");

    printf("Enter student name: ");
    scanf("%49s", studentName);

    printf("Enter Test 1 mark: ");
    scanf("%f", &test1);

    printf("Enter Test 2 mark: ");
    scanf("%f", &test2);

    printf("Enter Assignment mark: ");
    scanf("%f", &assignment);

    // Calculate total
    total = test1 + test2 + assignment;

    printf("\n---------------------------------\n");
    printf("Student Name : %s\n", studentName);
    printf("Test 1       : %.2f\n", test1);
    printf("Test 2       : %.2f\n", test2);
    printf("Assignment   : %.2f\n", assignment);
    printf("Total        : %.2f\n", total);
    printf("---------------------------------\n");

    // Decision making
    if (total >= 75 && total <= 100)
    {
        printf("Result: Distinction\n");
    }
    else if (total >= 60 && total < 75)
    {
        printf("Result: Credit\n");
    }
    else if (total >= 50 && total < 60)
    {
        printf("Result: Pass\n");
    }
    else if (total < 50)
    {
        printf("Result: Fail\n");
    }
    else
    {
        printf("Result: Invalid marks entered\n");
    }

    printf("---------------------------------\n");

    return 0;
}