# Demo Instructions for Group 2 Doubly Circular Attendance System

## Sample Data (Test Demo Only)
The program starts empty. Sample data is automatically loaded when you run the **Test Demo (option 9)** with all 6 group members using **simple IDs starting from 1**:
- **ID 1**: Eden Yehualashet
- **ID 2**: Abel Shiferaw
- **ID 3**: Temesgen Abebe
- **ID 4**: Mihretab Nigatu
- **ID 5**: Ermias Girma
- **ID 6**: Wondwosen Dukamo

**Note**: When test demo runs, employees with IDs 1, 3, and 6 (Eden, Temesgen, and Wondwosen) are automatically checked in.

## Quick Test Scenario

### Step 1: Run Test Demo (Loads Sample Data Automatically)
```
Choice: 9 (Run Test Demo)
- Automatically loads all 6 group members and demonstrates all functions
- Perfect for quick demonstration
```

### Step 2: Manual Testing - View Empty System First
```
Choice: 5 (Display All Employees)
- Shows empty system initially
```

### Step 3: Check-in Some Employees (Simple IDs)
```
Choice: 2 (Check-in Employee)
ID: 2 (Abel checks in)
ID: 5 (Ermias checks in)
```

### Step 3: Display All Employees
```
Choice: 5 (Display All Employees)
- Shows all employees with their attendance status
```

### Step 4: Search for an Employee (Simple ID)
```
Choice: 4 (Search Employee)
ID: 2 (Search for Abel)
```

### Step 5: Check-out an Employee (Simple ID)
```
Choice: 3 (Check-out Employee)
ID: 1 (Eden checks out)
```

### Step 6: Update Employee Name (Simple ID)
```
Choice: 6 (Update Employee Name)
ID: 2, New Name: Abel S. Shiferaw
```

### Step 7: Sort Employees by ID
```
Choice: 8 (Sort Employees by ID)
- Arranges employees in ascending order by ID (1, 2, 3, 4, 5, 6)
```

### Step 8: Delete an Employee (Simple ID)
```
Choice: 7 (Delete Employee)
ID: 4 (Remove Mihretab)
```

### Step 9: Run Automated Test Demo
```
Choice: 9 (Run Test Demo)
- Automatically loads sample data and demonstrates all functions
- Shows search, check-in/out, update, sort operations
- Perfect for presentations and demonstrations
```

### Step 10: Final Display
```
Choice: 5 (Display All Employees)
- Shows final state after all operations
```

## Key Features Demonstrated
1. **Doubly Circular Structure**: Navigation in both directions
2. **Check-in/Check-out**: Automatic timestamp recording
3. **Search Functionality**: Quick employee lookup
4. **Sorting**: Simple bubble sort implementation
5. **CRUD Operations**: Create, Read, Update, Delete
6. **Memory Management**: Proper cleanup on deletion

## Expected Output Features
- Real-time timestamps for check-in/check-out
- Clear status indicators (Present/Absent)
- Sorted display by employee ID
- Error handling for invalid operations
- User-friendly menu interface

## Notes for Presentation
- Emphasize the circular nature of the linked list
- Show how doubly-linked structure allows bidirectional traversal
- Demonstrate the simplicity of the algorithms used
- Highlight the practical application for attendance management
