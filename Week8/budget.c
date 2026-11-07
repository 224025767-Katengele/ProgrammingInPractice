#include <stdio.h>

// Function declaration
float calculateBudget(float revenue, float expenses);

int main(void)
{
    float revenue, expenses, balance;

    printf("========== BUDGET CALCULATOR ==========\n");

    printf("Enter total revenue: ");
    scanf("%f", &revenue);

    printf("Enter total expenses: ");
    scanf("%f", &expenses);

    // Call the function
    balance = calculateBudget(revenue, expenses);

    printf("\nRemaining Budget: N$%.2f\n", balance);

    if (balance > 0)
    {
        printf("Status: SURPLUS\n");
    }
    else if (balance < 0)
    {
        printf("Status: DEFICIT\n");
    }
    else
    {
        printf("Status: BALANCED\n");
    }

    return 0;
}

// Function definition
float calculateBudget(float revenue, float expenses)
{
    return revenue - expenses;
}