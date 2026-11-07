#include <stdio.h>

// Function declaration
float calculateSalary(float basic, float housing, float transport);

int main(void)
{
    float basic, housing, transport;
    float grossSalary;

    printf("========== SALARY CALCULATOR ==========\n");

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Enter housing allowance: ");
    scanf("%f", &housing);

    printf("Enter transport allowance: ");
    scanf("%f", &transport);

    // Call the function
    grossSalary = calculateSalary(basic, housing, transport);

    printf("\nGross Salary: N$%.2f\n", grossSalary);

    return 0;
}

// Function definition
float calculateSalary(float basic, float housing, float transport)
{
    return basic + housing + transport;
}