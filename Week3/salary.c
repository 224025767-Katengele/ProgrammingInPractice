#include <stdio.h>

int main(void)
{
    float basicSalary, housing, transport, tax;
    float grossSalary, netSalary;

    printf("========== EMPLOYEE SALARY CALCULATOR ==========\n\n");

    printf("Enter basic salary: ");
    if (scanf("%f", &basicSalary) != 1 || basicSalary < 0)
    {
        printf("Invalid basic salary.\n");
        return 1;
    }

    printf("Enter housing allowance: ");
    if (scanf("%f", &housing) != 1 || housing < 0)
    {
        printf("Invalid housing allowance.\n");
        return 1;
    }

    printf("Enter transport allowance: ");
    if (scanf("%f", &transport) != 1 || transport < 0)
    {
        printf("Invalid transport allowance.\n");
        return 1;
    }

    printf("Enter tax: ");
    if (scanf("%f", &tax) != 1 || tax < 0)
    {
        printf("Invalid tax amount.\n");
        return 1;
    }

    grossSalary = basicSalary + housing + transport;
    netSalary = grossSalary - tax;

    printf("\n---------------------------------\n");
    printf("Gross Salary : N$ %.2f\n", grossSalary);
    printf("Net Salary   : N$ %.2f\n", netSalary);

    if (netSalary >= 20000)
    {
        printf("Income Category: High Income\n");
    }
    else
    {
        printf("Income Category: Standard Income\n");
    }

    printf("---------------------------------\n");

    return 0;
}