#include <stdio.h>

// Function declaration
int searchEmployee(int id, int ids[], int size);

int main(void)
{
    int employeeIDs[] = {101, 102, 103, 104, 105};
    int searchID;
    int position;

    printf("========== EMPLOYEE SEARCH ==========\n");

    printf("Enter employee ID to search: ");
    scanf("%d", &searchID);

    // Call the search function
    position = searchEmployee(searchID, employeeIDs, 5);

    if (position != -1)
    {
        printf("Employee ID %d found at position %d.\n",
               searchID, position);
    }
    else
    {
        printf("Employee ID %d was not found.\n", searchID);
    }

    return 0;
}

// Function definition
int searchEmployee(int id, int ids[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (ids[i] == id)
        {
            return i;
        }
    }

    return -1;
}