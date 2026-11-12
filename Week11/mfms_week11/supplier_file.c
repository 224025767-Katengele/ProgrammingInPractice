#include <stdio.h>

int main(void)
{
    FILE *fp;
    int supplierID;
    char supplierName[50];
    char location[50];

    fp = fopen("data/suppliers.txt", "a");

    if (fp == NULL)
    {
        perror("Error opening supplier file");
        return 1;
    }

    printf("Enter supplier ID: ");
    if (scanf("%d", &supplierID) != 1)
    {
        printf("Invalid supplier ID.\n");
        fclose(fp);
        return 1;
    }

    printf("Enter supplier name: ");
    scanf("%49s", supplierName);

    printf("Enter supplier location: ");
    scanf("%49s", location);

    fprintf(fp, "Supplier ID: %d\n", supplierID);
    fprintf(fp, "Supplier Name: %s\n", supplierName);
    fprintf(fp, "Location: %s\n\n", location);

    fclose(fp);

    printf("\nSupplier information saved successfully!\n");

    return 0;
}