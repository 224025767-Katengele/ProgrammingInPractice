#include <stdio.h>
#include "reports.h"
#include "employees.h"
#include "budget.h"

void employeeReport(void)
{
    printf("\n--- Employee Report ---\n");
    listEmployees();
    printf("Total payroll: %.2f\n", calculatePayrollTotal());
}

void budgetReport(void)
{
    printf("\n--- Budget Report ---\n");

    double balance = calculateBudgetBalance(50000.0, 35000.0);

    printf("Allocated budget: N$50000.00\n");
    printf("Expenditure: N$35000.00\n");
    printf("Remaining balance: N$%.2f\n", balance);
}