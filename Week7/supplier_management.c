#include <stdio.h>
#include <string.h>

#define MAX_SUPPLIERS 5

int main(void)
{
    char names[MAX_SUPPLIERS][100];
    char emails[MAX_SUPPLIERS][100];
    char phones[MAX_SUPPLIERS][30];
    char towns[MAX_SUPPLIERS][50];

    int supplierCount = 0;
    int choice;
    char searchName[100];
    int found;

    do
    {
        printf("\n========== SUPPLIER MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Supplier\n");
        printf("2. Display Suppliers\n");
        printf("3. Search Supplier\n");
        printf("4. Show Supplier Name Length\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("\nInvalid input. Please enter a number.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
                /* Clear invalid input */
            }

            continue;
        }

        getchar();

        switch (choice)
        {
            case 1:
                if (supplierCount >= MAX_SUPPLIERS)
                {
                    printf("\nSupplier limit reached!\n");
                    break;
                }

                printf("\nEnter supplier name: ");
                fgets(names[supplierCount], sizeof(names[supplierCount]), stdin);
                names[supplierCount][strcspn(names[supplierCount], "\n")] = '\0';

                printf("Enter email: ");
                fgets(emails[supplierCount], sizeof(emails[supplierCount]), stdin);
                emails[supplierCount][strcspn(emails[supplierCount], "\n")] = '\0';

                printf("Enter phone number: ");
                fgets(phones[supplierCount], sizeof(phones[supplierCount]), stdin);
                phones[supplierCount][strcspn(phones[supplierCount], "\n")] = '\0';

                printf("Enter town: ");
                fgets(towns[supplierCount], sizeof(towns[supplierCount]), stdin);
                towns[supplierCount][strcspn(towns[supplierCount], "\n")] = '\0';

                supplierCount++;

                printf("\nSupplier added successfully!\n");
                break;

            case 2:
                if (supplierCount == 0)
                {
                    printf("\nNo suppliers available.\n");
                    break;
                }

                printf("\n========== REGISTERED SUPPLIERS ==========\n");

                for (int i = 0; i < supplierCount; i++)
                {
                    printf("\nSupplier %d\n", i + 1);
                    printf("Name : %s\n", names[i]);
                    printf("Email: %s\n", emails[i]);
                    printf("Phone: %s\n", phones[i]);
                    printf("Town : %s\n", towns[i]);
                }
                break;

            case 3:
                if (supplierCount == 0)
                {
                    printf("\nNo suppliers available to search.\n");
                    break;
                }

                printf("\nEnter supplier name to search: ");
                fgets(searchName, sizeof(searchName), stdin);
                searchName[strcspn(searchName, "\n")] = '\0';

                found = 0;

                for (int i = 0; i < supplierCount; i++)
                {
                    if (strcmp(searchName, names[i]) == 0)
                    {
                        printf("\nSupplier found!\n");
                        printf("Name : %s\n", names[i]);
                        printf("Email: %s\n", emails[i]);
                        printf("Phone: %s\n", phones[i]);
                        printf("Town : %s\n", towns[i]);

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("\nSupplier not found.\n");
                }
                break;

            case 4:
                if (supplierCount == 0)
                {
                    printf("\nNo suppliers available.\n");
                    break;
                }

                printf("\n========== SUPPLIER NAME LENGTHS ==========\n");

                for (int i = 0; i < supplierCount; i++)
                {
                    printf("%s: %zu characters\n",
                           names[i], strlen(names[i]));
                }
                break;

            case 5:
                printf("\nExiting Supplier Management System. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice! Please select 1 to 5.\n");
        }

    } while (choice != 5);

    return 0;
}