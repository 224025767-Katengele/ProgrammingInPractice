#include <stdio.h>

int main(void)
{
    int number = 50;

    int *ptr = &number;

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", (void *)&number);
    printf("Address stored in pointer: %p\n", (void *)ptr);
    printf("Value using pointer: %d\n", *ptr);

    return 0;
}