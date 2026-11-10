# Week 10 – File Handling in C

## Introduction
This practical demonstrates file handling in the C programming language. It covers text files, binary files, saving records, loading records and handling file-opening errors.

## Topics Covered
- Opening and closing files using `fopen()` and `fclose()`.
- Writing formatted information using `fprintf()`.
- Reading formatted information using `fscanf()`.
- Writing binary records using `fwrite()`.
- Reading binary records using `fread()`.
- Handling file-opening errors using `NULL` checks and `perror()`.
- Using append, read and binary file modes.

## Programs

### Employee Files
- `employee_file.c` – Saves employee information.
- `append_employee.c` – Adds employee records.
- `read_employee.c` – Reads employee records.
- `binary_employee.c` – Saves and reads binary employee records.

### Supplier Files
- `supplier_file.c` – Saves supplier information.
- `read_supplier.c` – Reads supplier records.

### Asset Files
- `asset_file.c` – Saves asset information.
- `read_asset.c` – Reads asset records.

### Budget Files
- `budget_file.c` – Saves budget information.
- `read_budget.c` – Reads budget records and calculates remaining budgets.

### Error Handling
- `file_error.c` – Demonstrates handling a missing file.

## Data Directory

The `data/` directory stores:
- `employees.txt`
- `employees.dat`
- `suppliers.txt`
- `assets.txt`
- `budgets.txt`

## Compilation

Compile individual programs using GCC:

```bash
gcc -Wall -Wextra -std=c11 employee_file.c -o employee_file.exe
```

Run the program:

```bash
./employee_file.exe
```

Replace `employee_file.c` and `employee_file.exe` with the relevant program names when testing other exercises.

## Conclusion

This practical demonstrates how C programs can save information permanently in text and binary files, retrieve stored records and handle file errors.