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
/* Display all employee salaries */
void displaySalaries(void)
{
    if (employeeCount == 0) {
        printf("\nNo employee salaries available.\n");
        return;
    }

    printf("\n========== EMPLOYEE SALARIES ==========\n");

    for (int i = 0; i < employeeCount; i++) {
        printf("ID: %d | Name: %s | Salary: N$%.2f\n",
               employees[i].id,
               employees[i].name,
               employees[i].salary);
    }
}

/* Find the highest employee salary */
double findHighest(void)
{
    if (employeeCount == 0) {
        return 0.0;
    }

    double highest = employees[0].salary;

    for (int i = 1; i < employeeCount; i++) {
        if (employees[i].salary > highest) {
            highest = employees[i].salary;
        }
    }

    return highest;
}

/* Calculate the average employee salary */
double calculateAverage(void)
{
    if (employeeCount == 0) {
        return 0.0;
    }

    double total = 0.0;

    for (int i = 0; i < employeeCount; i++) {
        total += employees[i].salary;
    }

    return total / employeeCount;
}

/* Give every employee a salary increase */
void giveRaise(double percentage)
{
    for (int i = 0; i < employeeCount; i++) {
        employees[i].salary +=
            employees[i].salary * percentage / 100.0;
    }

    printf("\nSalary increase applied successfully!\n");
}
/* Update an employee's salary using a pointer */
void updateSalary(Employee *e, double newSalary)
{
    if (e != NULL) {
        e->salary = newSalary;
        printf("\nEmployee salary updated successfully!\n");
    }
}

/* Find an employee using their ID */
Employee *findEmployee(Employee list[], int n, int id)
{
    for (int i = 0; i < n; i++) {
        if (list[i].id == id) {
            return &list[i];
        }
    }

    return NULL;
}
int main(void)
{
    int choice;

    do {
       printf("\n========== MFMS WEEK 12 ==========\n");
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
printf("14. Display Employee Salaries\n");
printf("15. Find Highest Salary\n");
printf("16. Calculate Average Salary\n");
printf("17. Give Salary Increase\n");
printf("18. Update Employee Salary\n");
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
    printf("\nExiting MFMS Week 12...\n");
    break;
case 12:
    saveEmployees();
    break;

case 13:
    loadEmployees();
    break;
case 14:
    displaySalaries();
    break;

case 15:
    printf("\nHighest Salary: N$%.2f\n", findHighest());
    break;

case 16:
    printf("\nAverage Salary: N$%.2f\n", calculateAverage());
    break;

case 17: {
    double percentage;

    printf("\nEnter salary increase percentage: ");
    scanf("%lf", &percentage);

    giveRaise(percentage);
    break;
}

case 18: {
    int id;
    double newSalary;

    printf("\nEnter Employee ID to update: ");
    scanf("%d", &id);

    Employee *found = findEmployee(employees, employeeCount, id);

    if (found == NULL) {
        printf("\nEmployee not found!\n");
    } else {
        printf("Employee Name: %s\n", found->name);
        printf("Current Salary: N$%.2f\n", found->salary);

        printf("Enter New Salary: ");
        scanf("%lf", &newSalary);

        updateSalary(found, newSalary);
    }

    break;
}

    default:
        printf("\nInvalid choice. Try again.\n");
}

    } while (choice != 11);

    return 0;
}