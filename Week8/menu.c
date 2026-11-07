#include <stdio.h>

// Function declaration
void displayMenu(void);

int main(void)
{
    // Call the menu function
    displayMenu();

    return 0;
}

// Function definition
void displayMenu(void)
{
    printf("\n==================================\n");
    printf(" MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("==================================\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
}