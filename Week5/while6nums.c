#include <stdio.h>

int main(void)
{
    int number[6];
    int i = 0;

    printf("========== ENTER SIX NUMBERS ==========\n\n");

    // Use a while loop to enter six numbers
    while (i < 6)
    {
        printf("Enter number %d: ", i + 1);

        if (scanf("%d", &number[i]) != 1)
        {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }

        i++;
    }

    // Reset counter before displaying numbers
    printf("\nThe numbers entered are:\n");

    i = 0;

    // Use another while loop to display the numbers
    while (i < 6)
    {
        printf("%d\n", number[i]);
        i++;
    }

    return 0;
}