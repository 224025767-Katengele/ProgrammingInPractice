#include <stdio.h>
#include <string.h>

int main(void)
{
    char suppliers[2][50] = {
        "ABC Office Supplies",
        "Namibia Stationery"
    };

    char searchName[50];
    int found = 0;

    printf("========== SUPPLIER SEARCH ==========\n");

    printf("Enter supplier name to search: ");
    fgets(searchName, sizeof(searchName), stdin);

    searchName[strcspn(searchName, "\n")] = '\0';

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(searchName, suppliers[i]) == 0)
        {
            printf("\nSupplier found!\n");
            printf("Supplier name: %s\n", suppliers[i]);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nSupplier not found.\n");
    }

    return 0;
}