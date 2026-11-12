#include <stdio.h>
#include <string.h>
#include "records.h"

Employee employees[MAX_RECORDS];
int employeeCount = 0;
Supplier suppliers[MAX_RECORDS];
int supplierCount = 0;
Asset assets[MAX_RECORDS];
int assetCount = 0;
Budget budgets[MAX_RECORDS];
int budgetCount = 0;
Project projects[MAX_RECORDS];
int projectCount = 0;

/* Function to add an employee */
void addEmployee(void)
{
    if (employeeCount >= MAX_RECORDS) {
        printf("\nEmployee records are full!\n");
        return;
    }

    Employee e;

    printf("\nEnter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf(" %29[^\n]", e.name);

    printf("Enter Department: ");
    scanf(" %19[^\n]", e.department);

    printf("Enter Salary: ");
    scanf("%lf", &e.salary);

    employees[employeeCount] = e;
    employeeCount++;

    printf("\nEmployee added successfully!\n");
}

/* Function to display employees */
void displayEmployees(void)
{
    if (employeeCount == 0) {
        printf("\nNo employee records available.\n");
        return;
    }

    printf("\n========== EMPLOYEE RECORDS ==========\n");

    for (int i = 0; i < employeeCount; i++) {
        printf("\nEmployee ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Department: %s\n", employees[i].department);
        printf("Salary: N$%.2f\n", employees[i].salary);
    }
}
/* Function to add a supplier */
void addSupplier(void)
{
    if (supplierCount >= MAX_RECORDS) {
        printf("\nSupplier records are full!\n");
        return;
    }

    Supplier s;

    printf("\nEnter Supplier ID: ");
    scanf("%d", &s.id);

    printf("Enter Supplier Name: ");
    scanf(" %39[^\n]", s.name);

    printf("Enter Supplier Email: ");
    scanf(" %39[^\n]", s.email);

    printf("Enter Supplier Phone: ");
    scanf(" %14[^\n]", s.phone);

    printf("Enter Supplier Town: ");
    scanf(" %19[^\n]", s.town);

    suppliers[supplierCount] = s;
    supplierCount++;

    printf("\nSupplier added successfully!\n");
}

/* Function to display suppliers */
void displaySuppliers(void)
{
    if (supplierCount == 0) {
        printf("\nNo supplier records available.\n");
        return;
    }

    printf("\n========== SUPPLIER RECORDS ==========\n");

    for (int i = 0; i < supplierCount; i++) {
        printf("\nSupplier ID: %d\n", suppliers[i].id);
        printf("Name: %s\n", suppliers[i].name);
        printf("Email: %s\n", suppliers[i].email);
        printf("Phone: %s\n", suppliers[i].phone);
        printf("Town: %s\n", suppliers[i].town);
    }
}
/* Function to add an asset */
void addAsset(void)
{
    if (assetCount >= MAX_RECORDS) {
        printf("\nAsset records are full!\n");
        return;
    }

    Asset a;

    printf("\nEnter Asset ID: ");
    scanf("%d", &a.id);

    printf("Enter Asset Description: ");
    scanf(" %39[^\n]", a.description);

    printf("Enter Asset Value: ");
    scanf("%lf", &a.value);

    printf("Enter Acquisition Day: ");
    scanf("%d", &a.acquired.day);

    printf("Enter Acquisition Month: ");
    scanf("%d", &a.acquired.month);

    printf("Enter Acquisition Year: ");
    scanf("%d", &a.acquired.year);

    assets[assetCount] = a;
    assetCount++;

    printf("\nAsset added successfully!\n");
}

/* Function to display assets */
void displayAssets(void)
{
    if (assetCount == 0) {
        printf("\nNo asset records available.\n");
        return;
    }

    printf("\n========== ASSET RECORDS ==========\n");

    for (int i = 0; i < assetCount; i++) {
        printf("\nAsset ID: %d\n", assets[i].id);
        printf("Description: %s\n", assets[i].description);
        printf("Value: N$%.2f\n", assets[i].value);

        printf("Date Acquired: %02d/%02d/%04d\n",
               assets[i].acquired.day,
               assets[i].acquired.month,
               assets[i].acquired.year);
    }
}
/* Function to add a budget */
void addBudget(void)
{
    if (budgetCount >= MAX_RECORDS) {
        printf("\nBudget records are full!\n");
        return;
    }

    Budget b;

    printf("\nEnter Department Name: ");
    scanf(" %19[^\n]", b.department);

    printf("Enter Allocated Budget: ");
    scanf("%lf", &b.allocated);

    printf("Enter Amount Spent: ");
    scanf("%lf", &b.spent);

    budgets[budgetCount] = b;
    budgetCount++;

    printf("\nBudget added successfully!\n");
}

/* Function to display budgets */
void displayBudgets(void)
{
    if (budgetCount == 0) {
        printf("\nNo budget records available.\n");
        return;
    }

    printf("\n========== BUDGET RECORDS ==========\n");

    for (int i = 0; i < budgetCount; i++) {
        printf("\nDepartment: %s\n", budgets[i].department);
        printf("Allocated: N$%.2f\n", budgets[i].allocated);
        printf("Spent: N$%.2f\n", budgets[i].spent);
        printf("Balance: N$%.2f\n",
               budgets[i].allocated - budgets[i].spent);
    }
}
/* Function to add a project */
void addProject(void)
{
    if (projectCount >= MAX_RECORDS) {
        printf("\nProject records are full!\n");
        return;
    }

    Project p;

    printf("\nEnter Project ID: ");
    scanf("%d", &p.id);

    printf("Enter Project Title: ");
    scanf(" %39[^\n]", p.title);

    printf("Enter Project Budget: ");
    scanf("%lf", &p.budget);

    printf("\nEnter Project Start Date\n");

    printf("Day: ");
    scanf("%d", &p.startDate.day);

    printf("Month: ");
    scanf("%d", &p.startDate.month);

    printf("Year: ");
    scanf("%d", &p.startDate.year);

    printf("\nEnter Project End Date\n");

    printf("Day: ");
    scanf("%d", &p.endDate.day);

    printf("Month: ");
    scanf("%d", &p.endDate.month);

    printf("Year: ");
    scanf("%d", &p.endDate.year);

    projects[projectCount] = p;
    projectCount++;

    printf("\nProject added successfully!\n");
}

/* Function to display projects */
void displayProjects(void)
{
    if (projectCount == 0) {
        printf("\nNo project records available.\n");
        return;
    }

    printf("\n========== PROJECT RECORDS ==========\n");

    for (int i = 0; i < projectCount; i++) {

        printf("\nProject ID: %d\n", projects[i].id);

        printf("Title: %s\n", projects[i].title);

        printf("Budget: N$%.2f\n", projects[i].budget);

        printf("Start Date: %02d/%02d/%04d\n",
               projects[i].startDate.day,
               projects[i].startDate.month,
               projects[i].startDate.year);

        printf("End Date: %02d/%02d/%04d\n",
               projects[i].endDate.day,
               projects[i].endDate.month,
               projects[i].endDate.year);
    }
}
/* Save employee records to a binary file */
void saveEmployees(void)
{
    FILE *file = fopen("employees.dat", "wb");

    if (file == NULL) {
        printf("\nError opening employee file!\n");
        return;
    }

    fwrite(&employeeCount, sizeof(int), 1, file);
    fwrite(employees, sizeof(Employee), employeeCount, file);

    fclose(file);

    printf("\nEmployee records saved successfully!\n");
}

/* Load employee records from a binary file */
void loadEmployees(void)
{
    FILE *file = fopen("employees.dat", "rb");

    if (file == NULL) {
        printf("\nNo saved employee records found.\n");
        return;
    }

    int count;

    if (fread(&count, sizeof(int), 1, file) != 1 ||
        count < 0 || count > MAX_RECORDS) {
        printf("\nInvalid employee file.\n");
        fclose(file);
        return;
    }

    if (fread(employees, sizeof(Employee), count, file) !=
        (size_t)count) {
        printf("\nError reading employee records.\n");
        fclose(file);
        employeeCount = 0;
        return;
    }

    employeeCount = count;

    fclose(file);

    printf("\nEmployee records loaded successfully!\n");
}
int main(void)
{
    int choice;

    do {
       printf("\n========== MFMS WEEK 11 ==========\n");
printf("1. Add Employee\n");
printf("2. Display Employees\n");
printf("3. Add Supplier\n");
printf("4. Display Suppliers\n");
printf("5. Add Asset\n");
printf("6. Display Assets\n");
printf("7. Add Budget\n");
printf("8. Display Budgets\n");
printf("9. Add Project\n");
printf("10. Display Projects\n");
printf("11. Exit\n");
printf("12. Save Employees\n");
printf("13. Load Employees\n");
printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid input. Please enter a number.\n");
            while (getchar() != '\n');
            choice = 0;
            continue;
        }

        switch (choice) {
    case 1:
        addEmployee();
        break;

    case 2:
        displayEmployees();
        break;

    case 3:
        addSupplier();
        break;

    case 4:
        displaySuppliers();
        break;

    case 5:
    addAsset();
    break;

case 6:
    displayAssets();
    break;

case 7:
    addBudget();
    break;

case 8:
    displayBudgets();
    break;

case 9:
    addProject();
    break;

case 10:
    displayProjects();
    break;

case 11:
    printf("\nExiting MFMS Week 11...\n");
    break;
case 12:
    saveEmployees();
    break;

case 13:
    loadEmployees();
    break;

    default:
        printf("\nInvalid choice. Try again.\n");
}

    } while (choice != 11);

    return 0;
}