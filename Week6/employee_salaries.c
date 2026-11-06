#include <stdio.h>

#define EMPLOYEES 50

int main(void)
{
    float salaries[EMPLOYEES];
    float total = 0.0f;
    float average;
    float highest, lowest;
    float searchSalary;
    int found = 0;

    printf("========== EMPLOYEE SALARY MANAGEMENT ==========\n\n");

    // Capture salaries
    for (int i = 0; i < EMPLOYEES; i++)
    {
        printf("Enter salary for employee %d: ", i + 1);

        if (scanf("%f", &salaries[i]) != 1 || salaries[i] <= 0)
        {
            printf("Invalid salary. Please enter a positive number.\n");
            return 1;
        }

        total += salaries[i];

        if (i == 0)
        {
            highest = salaries[i];
            lowest = salaries[i];
        }

        if (salaries[i] > highest)
        {
            highest = salaries[i];
        }

        if (salaries[i] < lowest)
        {
            lowest = salaries[i];
        }
    }

    average = total / EMPLOYEES;

    // Display all salaries
    printf("\n========== EMPLOYEE SALARIES ==========\n");

    for (int i = 0; i < EMPLOYEES; i++)
    {
        printf("Employee %d: N$%.2f\n", i + 1, salaries[i]);
    }

    // Display salary statistics
    printf("\n========== SALARY REPORT ==========\n");
    printf("Total salary expenditure: N$%.2f\n", total);
    printf("Average salary: N$%.2f\n", average);
    printf("Highest salary: N$%.2f\n", highest);
    printf("Lowest salary: N$%.2f\n", lowest);

    // Search for a salary
    printf("\nEnter salary to search for: ");

    if (scanf("%f", &searchSalary) != 1)
    {
        printf("Invalid search input.\n");
        return 1;
    }

    for (int i = 0; i < EMPLOYEES; i++)
    {
        if (salaries[i] == searchSalary)
        {
            printf("Salary N$%.2f found for employee %d.\n",
                   searchSalary, i + 1);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Salary not found.\n");
    }

    return 0;
}