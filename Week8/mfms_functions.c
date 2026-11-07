#include <stdio.h>

// Function declarations
void displayMenu(void);
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
int searchEmployee(int id, int ids[], int size);
int main(void)
{
    int choice;

    do
    {
        displayMenu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
{
    float amount, vat;

    printf("Enter amount: ");
    scanf("%f", &amount);

    vat = calculateVAT(amount);

    printf("VAT amount: N$%.2f\n", vat);
    break;
}

           case 2:
{
    float basic, housing, transport, grossSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Enter housing allowance: ");
    scanf("%f", &housing);

    printf("Enter transport allowance: ");
    scanf("%f", &transport);

    grossSalary = calculateSalary(basic, housing, transport);

    printf("Gross Salary: N$%.2f\n", grossSalary);
    break;
}
          case 3:
{
    float revenue, expenses, balance;

    printf("Enter total revenue: ");
    scanf("%f", &revenue);

    printf("Enter total expenses: ");
    scanf("%f", &expenses);

    balance = calculateBudget(revenue, expenses);

    printf("Remaining Budget: N$%.2f\n", balance);

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

    break;
}
           case 4:
{
    int employeeIDs[] = {101, 102, 103, 104, 105};
    int searchID, position;

    printf("Enter employee ID to search: ");
    scanf("%d", &searchID);

    position = searchEmployee(searchID, employeeIDs, 5);

    if (position != -1)
    {
        printf("Employee ID %d found at position %d.\n",
               searchID, position);
    }
    else
    {
        printf("Employee ID %d was not found.\n", searchID);
    }

    break;
}
            case 5:
                printf("Exiting MFMS. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 5);

    return 0;
}
void displayMenu(void)
{
    printf("\n====================================\n");
    printf(" MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("====================================\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Search Employee\n");
    printf("5. Exit\n");
}
float calculateVAT(float amount)
{
    return amount * 0.15f;
}
float calculateSalary(float basic, float housing, float transport)
{
    return basic + housing + transport;
}
float calculateBudget(float revenue, float expenses)
{
    return revenue - expenses;
}
int searchEmployee(int id, int ids[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (ids[i] == id)
        {
            return i;
        }
    }

    return -1;
}