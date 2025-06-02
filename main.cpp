/*
 * Group 2 - Doubly Circular Linked List Employee Attendance System
 *
 * Group Members:
 * 1. Eden Yehualashet [IHRCS-352438-16]
 * 2. Abel Shiferaw [IHRCS-9781-16]
 * 3. TEMESGEN ABEBE [IHRCS-328669-16]
 * 4. MIHRETAB NIGATU [IHRCS-9599-16]
 * 5. ERMIAS GIRMA [IHRCS-829949-16]
 * 6. Wondwosen Dukamo [IHRCS-907359-16]
 *
 * Simple Doubly Circular Linked List for Employee Attendance Management
 * Features: Check-in, Check-out, Search, Sort, Update, Delete
 */

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// Employee Node Structure
struct Employee
{
    int id;
    string name;
    string checkInTime;
    string checkOutTime;
    bool isPresent;
    Employee *next;
    Employee *prev;

    // Constructor
    Employee(int empId, string empName)
    {
        id = empId;
        name = empName;
        checkInTime = "";
        checkOutTime = "";
        isPresent = false;
        next = nullptr;
        prev = nullptr;
    }
};

// Doubly Circular Linked List Class
class AttendanceSystem
{
private:
    Employee *head;
    int totalEmployees;

public:
    // Constructor
    AttendanceSystem()
    {
        head = nullptr;
        totalEmployees = 0;
    }

    // Get current time as string
    string getCurrentTime()
    {
        time_t now = time(0);
        char *timeStr = ctime(&now);
        string result(timeStr);
        result.pop_back(); // Remove newline
        return result;
    }

    // Add new employee - Simple step by step
    void addEmployee(int id, string name)
    {
        // Step 1: Create new employee
        Employee *newEmp = new Employee(id, name);

        // Step 2: Check if this is the first employee
        if (head == nullptr)
        {
            // First employee - point to itself (circular)
            head = newEmp;
            newEmp->next = newEmp; // Points to itself
            newEmp->prev = newEmp; // Points to itself
        }
        else
        {
            // Step 3: Add to existing list
            Employee *tail = head->prev; // Last employee

            // Step 4: Connect new employee
            newEmp->next = head; // New employee points to first
            newEmp->prev = tail; // New employee points to last
            tail->next = newEmp; // Last employee points to new
            head->prev = newEmp; // First employee points to new
        }

        // Step 5: Increase count and show success
        totalEmployees++;
        cout << "Employee " << name << " added successfully!" << endl;
    }

    // Check-in employee
    void checkIn(int id)
    {
        Employee *emp = searchEmployee(id);
        if (emp == nullptr)
        {
            cout << "Employee with ID " << id << " not found!" << endl;
            return;
        }

        if (emp->isPresent)
        {
            cout << "Employee " << emp->name << " is already checked in!" << endl;
            return;
        }

        emp->isPresent = true;
        emp->checkInTime = getCurrentTime();
        emp->checkOutTime = "";
        cout << "Employee " << emp->name << " checked in at " << emp->checkInTime << endl;
    }

    // Check-out employee
    void checkOut(int id)
    {
        Employee *emp = searchEmployee(id);
        if (emp == nullptr)
        {
            cout << "Employee with ID " << id << " not found!" << endl;
            return;
        }

        if (!emp->isPresent)
        {
            cout << "Employee " << emp->name << " is not checked in!" << endl;
            return;
        }

        emp->isPresent = false;
        emp->checkOutTime = getCurrentTime();
        cout << "Employee " << emp->name << " checked out at " << emp->checkOutTime << endl;
    }

    // Search employee by ID
    Employee *searchEmployee(int id)
    {
        if (head == nullptr)
            return nullptr;

        Employee *current = head;
        do
        {
            if (current->id == id)
            {
                return current;
            }
            current = current->next;
        } while (current != head);

        return nullptr;
    }

    // Display all employees with proper table formatting
    void displayAll()
    {
        if (head == nullptr)
        {
            cout << "No employees in the system!" << endl;
            return;
        }

        cout << "\n=== Employee Attendance Status ===" << endl;
        cout << "ID    Name                 Status     Check-in                     Check-out" << endl;
        cout << "--------------------------------------------------------------------------------" << endl;

        Employee *current = head;
        do
        {
            // Format ID with proper spacing (2 characters)
            cout << current->id;
            if (current->id < 10)
                cout << "     "; // 5 spaces for single digit
            else
                cout << "    "; // 4 spaces for double digit

            // Format name with proper spacing (20 characters)
            string name = current->name;
            cout << name;
            for (int i = name.length(); i < 20; i++)
            {
                cout << " ";
            }

            // Format status with proper spacing (10 characters)
            string status = current->isPresent ? "Present" : "Absent";
            cout << status;
            for (int i = status.length(); i < 11; i++)
            {
                cout << " ";
            }

            // Format check-in time (28 characters)
            string checkIn = current->checkInTime.empty() ? "-" : current->checkInTime;
            cout << checkIn;
            for (int i = checkIn.length(); i < 29; i++)
            {
                cout << " ";
            }

            // Format check-out time
            string checkOut = current->checkOutTime.empty() ? "-" : current->checkOutTime;
            cout << checkOut << endl;

            current = current->next;
        } while (current != head);

        cout << "--------------------------------------------------------------------------------" << endl;
    }

    // Update employee name
    void updateEmployee(int id, string newName)
    {
        Employee *emp = searchEmployee(id);
        if (emp == nullptr)
        {
            cout << "Employee with ID " << id << " not found!" << endl;
            return;
        }

        string oldName = emp->name;
        emp->name = newName;
        cout << "Employee name updated from " << oldName << " to " << newName << endl;
    }

    // Delete employee
    void deleteEmployee(int id)
    {
        Employee *emp = searchEmployee(id);
        if (emp == nullptr)
        {
            cout << "Employee with ID " << id << " not found!" << endl;
            return;
        }

        if (totalEmployees == 1)
        {
            head = nullptr;
        }
        else
        {
            emp->prev->next = emp->next;
            emp->next->prev = emp->prev;

            if (emp == head)
            {
                head = emp->next;
            }
        }

        cout << "Employee " << emp->name << " deleted successfully!" << endl;
        delete emp;
        totalEmployees--;
    }

    // Simple bubble sort by ID - Easy to understand
    void sortByID()
    {
        // Check if list is empty or has only one employee
        if (head == nullptr || totalEmployees <= 1)
        {
            cout << "No sorting needed!" << endl;
            return;
        }

        // Simple bubble sort - compare and swap
        bool swapped;
        do
        {
            swapped = false;
            Employee *current = head;

            // Go through all employees
            for (int i = 0; i < totalEmployees - 1; i++)
            {
                // If current ID is bigger than next ID, swap them
                if (current->id > current->next->id)
                {
                    // Save current employee data
                    int tempId = current->id;
                    string tempName = current->name;
                    string tempCheckIn = current->checkInTime;
                    string tempCheckOut = current->checkOutTime;
                    bool tempPresent = current->isPresent;

                    // Copy next employee data to current
                    current->id = current->next->id;
                    current->name = current->next->name;
                    current->checkInTime = current->next->checkInTime;
                    current->checkOutTime = current->next->checkOutTime;
                    current->isPresent = current->next->isPresent;

                    // Copy saved data to next employee
                    current->next->id = tempId;
                    current->next->name = tempName;
                    current->next->checkInTime = tempCheckIn;
                    current->next->checkOutTime = tempCheckOut;
                    current->next->isPresent = tempPresent;

                    swapped = true;
                }
                current = current->next;
            }
        } while (swapped);

        cout << "Employees sorted by ID!" << endl;
    }



    // Get total count
    int getTotalEmployees()
    {
        return totalEmployees;
    }

    // Destructor
    ~AttendanceSystem()
    {
        if (head == nullptr)
            return;

        Employee *current = head;
        do
        {
            Employee *next = current->next;
            delete current;
            current = next;
        } while (current != head);
    }
};

// Main function with menu
int main()
{
    AttendanceSystem system;
    int choice, id;
    string name;

    cout << "=== Welcome to Employee Attendance System ===" << endl;
    cout << "Group 2 - Doubly Circular Linked List Implementation" << endl;

    while (true)
    {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Check-in Employee" << endl;
        cout << "3. Check-out Employee" << endl;
        cout << "4. Search Employee" << endl;
        cout << "5. Display All Employees" << endl;
        cout << "6. Update Employee Name" << endl;
        cout << "7. Delete Employee" << endl;
        cout << "8. Sort Employees by ID" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> id;
            cout << "Enter Employee Name: ";
            cin.ignore();
            getline(cin, name);
            system.addEmployee(id, name);
            break;

        case 2:
            cout << "Enter Employee ID to check-in: ";
            cin >> id;
            system.checkIn(id);
            break;

        case 3:
            cout << "Enter Employee ID to check-out: ";
            cin >> id;
            system.checkOut(id);
            break;

        case 4:
            cout << "Enter Employee ID to search: ";
            cin >> id;
            {
                Employee *emp = system.searchEmployee(id);
                if (emp)
                {
                    cout << "Found: ID=" << emp->id << ", Name=" << emp->name;
                    cout << ", Status=" << (emp->isPresent ? "Present" : "Absent") << endl;
                }
                else
                {
                    cout << "Employee not found!" << endl;
                }
            }
            break;

        case 5:
            system.displayAll();
            break;

        case 6:
            cout << "Enter Employee ID to update: ";
            cin >> id;
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, name);
            system.updateEmployee(id, name);
            break;

        case 7:
            cout << "Enter Employee ID to delete: ";
            cin >> id;
            system.deleteEmployee(id);
            break;

        case 8:
            system.sortByID();
            break;

        case 9:
            cout << "Thank you for using Employee Attendance System!" << endl;
            return 0;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
