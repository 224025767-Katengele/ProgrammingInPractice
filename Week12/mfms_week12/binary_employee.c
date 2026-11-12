#include <stdio.h>

typedef struct
{
    int id;
    char name[50];
    double salary;
} Employee;

int main(void)
{
    FILE *fp;

    Employee emp = {103, "David", 22000.00};
    Employee readEmp;

    /* Open binary file for writing */
    fp = fopen("data/employees.dat", "ab");

    if (fp == NULL)
    {
        perror("Error opening binary file");
        return 1;
    }

    /* Write employee record */
    if (fwrite(&emp, sizeof(Employee), 1, fp) != 1)
    {
        printf("Error writing employee record!\n");
        fclose(fp);
        return 1;
    }

    fclose(fp);

    printf("Employee record saved successfully!\n");

    /* Open binary file for reading */
    fp = fopen("data/employees.dat", "rb");

    if (fp == NULL)
    {
        perror("Error opening binary file");
        return 1;
    }

    printf("\n--- Saved Employee Records ---\n");

    /* Read employee records */
    while (fread(&readEmp, sizeof(Employee), 1, fp) == 1)
    {
        printf("Employee ID: %d\n", readEmp.id);
        printf("Employee Name: %s\n", readEmp.name);
        printf("Employee Salary: N$%.2f\n\n", readEmp.salary);
    }

    if (ferror(fp))
    {
        printf("Error reading binary file!\n");
        fclose(fp);
        return 1;
    }

    fclose(fp);

    return 0;
}