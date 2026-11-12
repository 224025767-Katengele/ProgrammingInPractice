#include <stdio.h>

int main(void)
{
    FILE *fp;
    int budgetID;
    char department[50];
    float allocatedBudget;
    float expenditure;

    fp = fopen("data/budgets.txt", "a");

    if (fp == NULL)
    {
        perror("Error opening budget file");
        return 1;
    }

    printf("Enter budget ID: ");
    if (scanf("%d", &budgetID) != 1)
    {
        printf("Invalid budget ID.\n");
        fclose(fp);
        return 1;
    }

    printf("Enter department: ");
    scanf("%49s", department);

    printf("Enter allocated budget: ");
    if (scanf("%f", &allocatedBudget) != 1)
    {
        printf("Invalid allocated budget.\n");
        fclose(fp);
        return 1;
    }

    printf("Enter expenditure: ");
    if (scanf("%f", &expenditure) != 1)
    {
        printf("Invalid expenditure.\n");
        fclose(fp);
        return 1;
    }

    fprintf(fp, "Budget ID: %d\n", budgetID);
    fprintf(fp, "Department: %s\n", department);
    fprintf(fp, "Allocated Budget: %.2f\n", allocatedBudget);
    fprintf(fp, "Expenditure: %.2f\n\n", expenditure);

    fclose(fp);

    printf("\nBudget information saved successfully!\n");

    return 0;
}