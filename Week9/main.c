#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "utilities.h"
#include "reports.h"

int main(void)
{
    displayWelcome();

    printf("\n--- Employee Module ---\n");
    addEmployee();
    listEmployees();
    printf("Payroll total: %.2f\n", calculatePayrollTotal());

    printf("\n--- Budget Module ---\n");
    addBudget();

    double balance = calculateBudgetBalance(50000.0, 35000.0);
    printf("Budget balance: N$%.2f\n", balance);

    employeeReport();
    budgetReport();

    return 0;
}