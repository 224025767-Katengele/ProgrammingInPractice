#include <stdio.h>

int main(void)
{
    FILE *fp;
    int budgetID;
    char department[50];
    float allocatedBudget;
    float expenditure;

    fp = fopen("data/budgets.txt", "r");

    if (fp == NULL)
    {
        perror("Error opening budget file");
        return 1;
    }

    printf("\n--- Budget Records ---\n");

    while (fscanf(fp,
                  "Budget ID: %d\n"
                  "Department: %49[^\n]\n"
                  "Allocated Budget: %f\n"
                  "Expenditure: %f\n",
                  &budgetID, department,
                  &allocatedBudget, &expenditure) == 4)
    {
        printf("\nBudget ID: %d\n", budgetID);
        printf("Department: %s\n", department);
        printf("Allocated Budget: N$%.2f\n", allocatedBudget);
        printf("Expenditure: N$%.2f\n", expenditure);
        printf("Remaining Budget: N$%.2f\n",
               allocatedBudget - expenditure);
    }

    if (ferror(fp))
    {
        printf("Error reading budget file.\n");
        fclose(fp);
        return 1;
    }

    fclose(fp);

    return 0;
}