#include <stdio.h>

int main(void)
{
    FILE *fp;
    int id;
    char name[50];
    float salary;

    fp = fopen("data/employees.txt", "r");

    if (fp == NULL)
    {
        perror("Error opening employee file");
        return 1;
    }

    printf("\n--- Employee Records ---\n");

    while (fscanf(fp,
                  "Employee ID: %d\n"
                  "Employee Name: %49[^\n]\n"
                  "Employee Salary: %f\n",
                  &id, name, &salary) == 3)
    {
        printf("\nEmployee ID: %d\n", id);
        printf("Employee Name: %s\n", name);
        printf("Employee Salary: N$%.2f\n", salary);
    }

    if (ferror(fp))
    {
        printf("An error occurred while reading the file.\n");
        fclose(fp);
        return 1;
    }

    fclose(fp);

    return 0;
}