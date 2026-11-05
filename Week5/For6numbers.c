#include <stdio.h>

int main(void)
{
    int number[6];

    printf("========== ENTER SIX NUMBERS ==========\n\n");

    // Use a for loop to enter six numbers
    for (int i = 0; i < 6; i++)
    {
        printf("Enter number %d: ", i + 1);

        if (scanf("%d", &number[i]) != 1)
        {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }
    }

    // Use another for loop to display the numbers
    printf("\nThe numbers entered are:\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", number[i]);
    }

    return 0;
}