# Group 2 - Doubly Circular Linked List Employee Attendance System

## Group Members
1. Eden Yehualashet [IHRCS-352438-16]
2. Abel Shiferaw [IHRCS-9781-16]
3. TEMESGEN ABEBE [IHRCS-328669-16]
4. MIHRETAB NIGATU [IHRCS-9599-16]
5. ERMIAS GIRMA [IHRCS-829949-16]
6. Wondwosen Dukamo [907359/16]

## Project Description
This project implements a **simple and beginner-friendly** doubly-circular linked list to handle employee attendance management for an organization. The system uses **simple IDs starting from 1** and supports check-in and check-out operations along with basic CRUD operations. The code is designed to be **easy to understand** for students learning data structures.

## Features
- **Add Employee**: Register new employees in the system
- **Check-in**: Record employee arrival time
- **Check-out**: Record employee departure time
- **Search**: Find employee by ID
- **Display All**: Show all employees and their attendance status
- **Update**: Modify employee information
- **Delete**: Remove employee from system
- **Sort**: Arrange employees by ID using bubble sort

## Data Structure
- **Doubly Circular Linked List**: Each node contains employee information and pointers to both next and previous nodes
- **Circular**: Last node points back to first node, first node's previous points to last node
- **Simple Implementation**: Basic algorithms with clear logic, no complex optimizations

## How to Compile and Run
```bash
g++ doubly_circular_attendance.cpp -o final_attendance
./final_attendance
```

Or simply double-click `compile_and_run.bat` for automatic compilation and execution.

## Menu Options
1. Add Employee
2. Check-in Employee
3. Check-out Employee
4. Search Employee
5. Display All Employees
6. Update Employee Name
7. Delete Employee
8. Sort Employees by ID
9. Exit

## Implementation Details
- **Simple IDs**: Employee IDs start from 1, 2, 3, 4, 5, 6 (easy to remember)
- **Perfect table formatting**: Properly aligned columns with consistent spacing
- **Beginner-friendly code**: Step-by-step comments explaining each operation
- **Basic bubble sort**: Simple sorting algorithm easy to understand
- **Automatic timestamps**: Real-time check-in/check-out recording
- **Clear error messages**: Easy to understand what went wrong
- **Memory management**: Proper cleanup with destructor
- **Menu-driven interface**: Simple numbered menu for easy interaction

## Code Structure
- **Employee struct**: Contains employee data and pointers
- **AttendanceSystem class**: Manages the doubly circular linked list
- **Simple algorithms**: Basic implementations for educational purposes
- **Clear comments**: Well-documented code for easy understanding
