#include <stdio.h>

#define DEPARTMENTS 10

int main(void)
{
    float budgets[DEPARTMENTS];
    float total = 0.0f;
    float average;
    float temp;

    printf("========== DEPARTMENT BUDGET MANAGEMENT ==========\n\n");

    // Capture 10 department budgets
    for (int i = 0; i < DEPARTMENTS; i++)
    {
        printf("Enter budget for department %d: ", i + 1);

        if (scanf("%f", &budgets[i]) != 1 || budgets[i] < 0)
        {
            printf("Invalid budget. Please enter a non-negative number.\n");
            return 1;
        }

        total += budgets[i];
    }

    // Calculate average budget
    average = total / DEPARTMENTS;

    // Display original budgets
    printf("\n========== DEPARTMENT BUDGETS ==========\n");

    for (int i = 0; i < DEPARTMENTS; i++)
    {
        printf("Department %d: N$%.2f\n", i + 1, budgets[i]);
    }

    // Display total and average
    printf("\n========== BUDGET SUMMARY ==========\n");
    printf("Total department budget: N$%.2f\n", total);
    printf("Average department budget: N$%.2f\n", average);

    // Sort budgets from lowest to highest using bubble sort
    for (int i = 0; i < DEPARTMENTS - 1; i++)
    {
        for (int j = 0; j < DEPARTMENTS - i - 1; j++)
        {
            if (budgets[j] > budgets[j + 1])
            {
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    // Display sorted budgets
    printf("\n========== BUDGETS SORTED LOWEST TO HIGHEST ==========\n");

    for (int i = 0; i < DEPARTMENTS; i++)
    {
        printf("Position %d: N$%.2f\n", i + 1, budgets[i]);
    }

    return 0;
}