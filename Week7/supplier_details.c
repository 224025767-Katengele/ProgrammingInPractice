#include <stdio.h>
#include <string.h>

int main(void)
{
    char supplierName[100];
    char email[100];
    char phone[30];
    char town[50];

    printf("========== SUPPLIER MANAGEMENT ==========\n\n");

    // Capture supplier details
    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);

    printf("Enter phone number: ");
    fgets(phone, sizeof(phone), stdin);

    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);

    // Remove newline characters
    supplierName[strcspn(supplierName, "\n")] = '\0';
    email[strcspn(email, "\n")] = '\0';
    phone[strcspn(phone, "\n")] = '\0';
    town[strcspn(town, "\n")] = '\0';

    // Display supplier information
    printf("\n========== SUPPLIER DETAILS ==========\n");
    printf("Name : %s\n", supplierName);
    printf("Email: %s\n", email);
    printf("Phone: %s\n", phone);
    printf("Town : %s\n", town);
printf("\n========== STRING LENGTHS ==========\n");
printf("Supplier name length: %zu characters\n", strlen(supplierName));
printf("Email length: %zu characters\n", strlen(email));
printf("Town length: %zu characters\n", strlen(town));
    return 0;
}