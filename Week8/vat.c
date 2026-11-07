#include <stdio.h>

// Function declaration
float calculateVAT(float amount);

int main(void)
{
    float amount;
    float vat;

    printf("========== VAT CALCULATOR ==========\n");

    printf("Enter amount: ");
    scanf("%f", &amount);

    // Call the function
    vat = calculateVAT(amount);

    printf("\nVAT: %.2f\n", vat);

    return 0;
}

// Function definition
float calculateVAT(float amount)
{
    return amount * 0.15f;
}