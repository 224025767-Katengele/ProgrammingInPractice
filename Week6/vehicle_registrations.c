#include <stdio.h>
#include <string.h>

#define VEHICLES 20

int main(void)
{
    char registrations[VEHICLES][20];
    char searchRegistration[20];
    int found = 0;

    printf("========== VEHICLE REGISTRATION MANAGEMENT ==========\n\n");

    // Capture 20 vehicle registration numbers
    for (int i = 0; i < VEHICLES; i++)
    {
        printf("Enter registration number for vehicle %d: ", i + 1);

        if (scanf("%19s", registrations[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
    }

    // Display all registration numbers
    printf("\n========== VEHICLE REGISTRATION LIST ==========\n");

    for (int i = 0; i < VEHICLES; i++)
    {
        printf("Vehicle %d: %s\n", i + 1, registrations[i]);
    }

    // Search for a registration number
    printf("\nEnter registration number to search for: ");

    if (scanf("%19s", searchRegistration) != 1)
    {
        printf("Invalid search input.\n");
        return 1;
    }

    for (int i = 0; i < VEHICLES; i++)
    {
        if (strcmp(registrations[i], searchRegistration) == 0)
        {
            printf("Registration number %s found for vehicle %d.\n",
                   searchRegistration, i + 1);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Registration number not found.\n");
    }

    return 0;
}