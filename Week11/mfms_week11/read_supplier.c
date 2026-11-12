#include <stdio.h>

int main(void)
{
    FILE *fp;
    int supplierID;
    char supplierName[50];
    char location[50];

    fp = fopen("data/suppliers.txt", "r");

    if (fp == NULL)
    {
        perror("Error opening supplier file");
        return 1;
    }

    printf("\n--- Supplier Records ---\n");

    while (fscanf(fp,
                  "Supplier ID: %d\n"
                  "Supplier Name: %49[^\n]\n"
                  "Location: %49[^\n]\n",
                  &supplierID, supplierName, location) == 3)
    {
        printf("\nSupplier ID: %d\n", supplierID);
        printf("Supplier Name: %s\n", supplierName);
        printf("Location: %s\n", location);
    }

    if (ferror(fp))
    {
        printf("Error reading supplier file.\n");
        fclose(fp);
        return 1;
    }

    fclose(fp);

    return 0;
}