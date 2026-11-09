#include <stdio.h>
#include "utilities.h"

void pauseScreen(void)
{
    printf("\nPress Enter to continue...");
    getchar();
}

void displayWelcome(void)
{
    printf("Welcome to the Municipal Financial Management System!\n");
}