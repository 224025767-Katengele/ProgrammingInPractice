#include <stdio.h>

void swapSalaries(double a, double b)
{
    double temp;

    temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    double salary1 = 5000;
    double salary2 = 8000;

    printf("Before swapping:\n");
    printf("Salary 1: %.2f\n", salary1);
    printf("Salary 2: %.2f\n", salary2);

    swapSalaries(salary1, salary2);

    printf("\nAfter swapping:\n");
    printf("Salary 1: %.2f\n", salary1);
    printf("Salary 2: %.2f\n", salary2);

    return 0;
}