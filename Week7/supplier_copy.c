#include <stdio.h>
#include <string.h>

int main(void)
{
    char supplierName[50];
    char backupName[50];

    printf("========== SUPPLIER NAME COPY ==========\n");

    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);

    supplierName[strcspn(supplierName, "\n")] = '\0';

    // Copy supplier name into backupName
    strcpy(backupName, supplierName);

    printf("\nOriginal supplier name: %s\n", supplierName);
    printf("Copied supplier name:   %s\n", backupName);

    return 0;
}