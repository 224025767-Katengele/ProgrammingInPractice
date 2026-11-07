#include <stdio.h>
#include <string.h>

int main(void)
{
    char supplierName[100];
    char town[50];
    char message[200] = "";

    printf("========== SUPPLIER INFORMATION ==========\n");

    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);

    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);

    supplierName[strcspn(supplierName, "\n")] = '\0';
    town[strcspn(town, "\n")] = '\0';

    // Join the strings
    strcat(message, supplierName);
    strcat(message, " operates in ");
    strcat(message, town);
    strcat(message, ".");

    printf("\n========== SUPPLIER MESSAGE ==========\n");
    printf("%s\n", message);

    return 0;
}