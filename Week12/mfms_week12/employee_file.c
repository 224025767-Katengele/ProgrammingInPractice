#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("data/employees.txt", "w");

    if (fp == NULL)
    {
        perror("Error opening employee file");
        return 1;
    }

    fprintf(fp, "Employee ID: 101\n");
    fprintf(fp, "Employee Name: John\n");
    fprintf(fp, "Employee Salary: 15000.00\n");

    fclose(fp);

    printf("Employee information saved successfully!\n");

    return 0;
}