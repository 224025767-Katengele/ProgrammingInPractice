#include <stdio.h>

int main(void)
{
char supplierName[4][50];
float price[4];
int registered[4];
int documentsComplete[4];

float budget;
float lowestPrice = 0;
int preferredSupplier = -1;

printf("===== TENDER EVALUATION SYSTEM =====\n");

printf("Enter available budget: N$ ");
scanf("%f", &budget);

for (int i = 0; i < 4; i++)
{
    printf("\nEnter details for Supplier %d\n", i + 1);

    printf("Supplier name: ");
    scanf(" %49[^\n]", supplierName[i]);

    printf("Tender price: N$ ");
    scanf("%f", &price[i]);

    printf("Is the supplier registered? (1=Yes, 0=No): ");
    scanf("%d", &registered[i]);

    printf("Are all documents complete? (1=Yes, 0=No): ");
    scanf("%d", &documentsComplete[i]);
}

printf("\n===== TENDER EVALUATION RESULTS =====\n");

for (int i = 0; i < 4; i++)
{
    printf("\nSupplier: %s\n", supplierName[i]);
    printf("Tender Price: N$ %.2f\n", price[i]);

    if (registered[i] == 1 &&
        documentsComplete[i] == 1 &&
        price[i] <= budget)
    {
        printf("Status: Qualified\n");

        if (preferredSupplier == -1 ||
            price[i] < lowestPrice)
        {
            lowestPrice = price[i];
            preferredSupplier = i;
        }
    }
    else
    {
        printf("Status: Disqualified\n");
    }
}

printf("\n===== PREFERRED SUPPLIER =====\n");

if (preferredSupplier != -1)
{
    printf("Preferred Supplier: %s\n",
           supplierName[preferredSupplier]);

    printf("Lowest Tender Price: N$ %.2f\n",
           lowestPrice);
}
else
{
    printf("No qualified suppliers found.\n");
}

return 0;

}
