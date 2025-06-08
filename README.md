# Doubly Circular Linked List Employee Attendance System

A C++ implementation of employee attendance management using doubly circular linked list data structure.

## 📋 Project Overview

This project implements a **doubly circular linked list** for employee attendance management. The system enforces unique employee IDs (primary key constraint) and provides comprehensive CRUD operations with real-time attendance tracking.

### ✨ Key Features
- ✅ **Unique Employee IDs** - Primary key constraint prevents duplicates
- ✅ **Real-time Attendance** - Check-in/check-out with timestamps
- ✅ **Complete CRUD Operations** - Create, Read, Update, Delete
- ✅ **Sorting Algorithm** - Bubble sort by employee ID
- ✅ **Memory Management** - Proper allocation and cleanup
- ✅ **Error Handling** - Comprehensive input validation

## 🚀 Quick Start

### Prerequisites
- C++ compiler (g++, clang++, or Visual Studio)
- C++11 or later standard

### Compilation & Execution
```bash
# Compile
g++ -std=c++11 main.cpp -o attendance_system

# Run
./attendance_system
```

### Sample Usage
```
=== Employee Attendance Status ===
ID    Name                 Status     Check-in                     Check-out
--------------------------------------------------------------------------------
101   John Smith           Present    Mon Dec 11 09:15:30 2023     -
102   Sarah Johnson        Absent     -                            Mon Dec 11 17:30:45 2023
103   Mike Davis           Present    Mon Dec 11 08:45:20 2023     -
104   Emily Brown          Present    Mon Dec 11 09:00:15 2023     -
105   David Wilson         Absent     -                            -
106   Lisa Anderson        Present    Mon Dec 11 08:30:10 2023     -
--------------------------------------------------------------------------------
```

## 🏗️ Data Structure

### Doubly Circular Linked List

| Property              | Description                           | Benefit                        |
|:----------------------|:--------------------------------------|:-------------------------------|
| **Bidirectional**     | Next/prev pointers                   | Forward & backward traversal   |
| **Circular**          | No NULL endpoints                     | Continuous navigation          |
| **Dynamic**           | Runtime size adjustment               | Memory efficient               |
| **Primary Key**       | Unique employee IDs                   | Data integrity                 |

## 📖 Menu Options

| Option | Operation           | Function                              |
|:------:|:--------------------|:--------------------------------------|
| **1**  | Add Employee        | Register with unique ID validation    |
| **2**  | Check-in            | Record arrival time with timestamp    |
| **3**  | Check-out           | Record departure time with timestamp  |
| **4**  | Search Employee     | Find employee by ID                   |
| **5**  | Display All         | Show formatted attendance table       |
| **6**  | Update Employee     | Modify employee information           |
| **7**  | Delete Employee     | Remove employee from system           |
| **8**  | Sort by ID          | Arrange in ascending ID order         |
| **9**  | Exit                | Terminate program                     |

## 🧪 Sample Test Data

Example employee data for testing:

```cpp
// Sample employee data for testing
ID: 101, Name: "John Smith"
ID: 102, Name: "Sarah Johnson"
ID: 103, Name: "Mike Davis"
ID: 104, Name: "Emily Brown"
ID: 105, Name: "David Wilson"
ID: 106, Name: "Lisa Anderson"
```

### Test Scenarios

| Test Type           | Scenario                              | Expected Result           |
|:--------------------|:--------------------------------------|:--------------------------|
| **Primary Key**     | Add duplicate ID                      | Error message displayed   |
| **Attendance Flow** | Add → Check-in → Check-out → Display | Complete workflow success |
| **CRUD Operations** | Create, Read, Update, Delete          | All operations functional |
| **Sorting**         | Random order → Sort by ID             | Ascending order result    |
| **Edge Cases**      | Empty list, single employee           | Graceful handling         |

## ⚡ Performance Overview

| Operation          | Time Complexity | Space Complexity | Description                    |
|:-------------------|:---------------:|:----------------:|:-------------------------------|
| **Add Employee**   | `O(n)`          | `O(1)`           | ID uniqueness validation       |
| **Search**         | `O(n)`          | `O(1)`           | Linear search through list     |
| **Check-in/out**   | `O(n)`          | `O(1)`           | Search + constant update       |
| **Update**         | `O(n)`          | `O(1)`           | Search + data modification     |
| **Delete**         | `O(n)`          | `O(1)`           | Search + link adjustment       |
| **Display All**    | `O(n)`          | `O(1)`           | Single traversal of list       |
| **Sort**           | `O(n²)`         | `O(1)`           | Bubble sort algorithm          |

## 📚 Documentation

For detailed technical documentation, implementation details, and comprehensive analysis, see:
- **[DOCUMENTATION.md](DOCUMENTATION.md)** - Complete technical documentation
- **[main.cpp](main.cpp)** - Source code with detailed comments

## 🔧 How It Works

### Core Implementation

| Component             | Implementation                        | Purpose                   |
|:----------------------|:--------------------------------------|:--------------------------|
| **Data Structure**    | Doubly circular linked list          | Efficient bidirectional access |
| **Primary Key**       | Unique ID validation                  | Data integrity            |
| **Memory Management** | Dynamic allocation with cleanup       | Optimal memory usage      |
| **Algorithms**        | Linear search + bubble sort           | Simple and educational    |

### Key Features

| Feature               | Description                           | Benefit                   |
|:----------------------|:--------------------------------------|:--------------------------|
| **Circular Links**    | No NULL pointers                      | Continuous navigation     |
| **Bidirectional**     | Next/prev pointers                    | Forward/backward traversal |
| **Real-time Stamps**  | Automatic time recording              | Accurate attendance logs  |
| **Error Handling**    | Comprehensive validation              | Robust operation          |

## 📄 License

Educational use - Data Structures and Algorithms Implementation

