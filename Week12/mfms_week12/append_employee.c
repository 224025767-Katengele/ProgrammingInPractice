#include <stdio.h>

int main(void)
{
    FILE *fp;
    int id;
    char name[50];
    float salary;

    fp = fopen("data/employees.txt", "a");

    if (fp == NULL)
    {
        perror("Error opening employee file");
        return 1;
    }

    printf("Enter employee ID: ");
    if (scanf("%d", &id) != 1)
    {
        printf("Invalid employee ID.\n");
        fclose(fp);
        return 1;
    }

    printf("Enter employee name: ");
    if (scanf("%49s", name) != 1)
    {
        printf("Invalid employee name.\n");
        fclose(fp);
        return 1;
    }

    printf("Enter employee salary: ");
    if (scanf("%f", &salary) != 1)
    {
        printf("Invalid employee salary.\n");
        fclose(fp);
        return 1;
    }

    fprintf(fp, "Employee ID: %d\n", id);
    fprintf(fp, "Employee Name: %s\n", name);
    fprintf(fp, "Employee Salary: %.2f\n", salary);

    fclose(fp);

    printf("\nEmployee record added successfully!\n");

    return 0;
}