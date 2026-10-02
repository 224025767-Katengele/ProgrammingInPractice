#include <stdio.h>

int main()
{
    int number[6];
    int i = 0;

    while (i < 6)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number[i]);
        i++;
    }

    printf("\nThe numbers entered are:\n");

    i = 0;

    while (i < 6)
    {
        printf("%d\n", number[i]);
        i++;
    }

    return 0;
}