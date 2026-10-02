#include <stdio.h>

int main()
{
    int number[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    printf("\nThe numbers entered are:\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", number[i]);
    }

    return 0;
}