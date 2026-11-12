# PAP521S – Programming in Practice

## Week 12: Pointers in C

### Project Description
This project demonstrates the use of pointers in C programming, including passing values by reference, updating employee salaries through pointers, and searching for employee records.

### Pointer Concepts Implemented
1. Declaring and using pointers.
2. Accessing variable addresses using the address operator (&).
3. Accessing values using the dereference operator (*).
4. Swapping salaries using pointers.
5. Demonstrating swapping without pointers.

### Employee Salary Functions
- `displaySalaries()` – Displays all employee salaries.
- `findHighest()` – Finds the highest employee salary.
- `calculateAverage()` – Calculates the average employee salary.
- `giveRaise()` – Applies a salary increase to all employees.
- `updateSalary()` – Updates an employee's salary using a pointer.
- `findEmployee()` – Searches for an employee and returns a pointer to the record.

### Program Features
- Add and display employees.
- Add and display suppliers.
- Add and display assets.
- Add and display budgets.
- Add and display projects.
- Save and load employee records using `fwrite()` and `fread()`.
- Display employee salaries.
- Find the highest salary.
- Calculate average salary.
- Give employees a salary increase.
- Update an individual employee's salary using pointers.

### Compilation
```bash
gcc -std=c99 -Wall -Wextra -pedantic main.c -o mfms.exe
```

### Running the Program
```bash
./mfms.exe
```

### Testing
The program was tested using three employee records:
- John – N$5,000
- Mary – N$8,000
- David – N$10,000

Tests included salary swapping, finding the highest salary, calculating average salary, updating employee salaries, searching for existing and non-existing employees, applying a salary increase, and saving and loading employee records successfully.