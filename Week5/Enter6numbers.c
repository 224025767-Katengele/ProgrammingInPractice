#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, num6;

    printf("========== ENTER SIX NUMBERS ==========\n\n");

    printf("Enter number 1: ");
    if (scanf("%d", &num1) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter number 2: ");
    if (scanf("%d", &num2) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter number 3: ");
    if (scanf("%d", &num3) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter number 4: ");
    if (scanf("%d", &num4) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter number 5: ");
    if (scanf("%d", &num5) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter number 6: ");
    if (scanf("%d", &num6) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("\nThe numbers entered are:\n");
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    printf("%d\n", num4);
    printf("%d\n", num5);
    printf("%d\n", num6);

    return 0;
}