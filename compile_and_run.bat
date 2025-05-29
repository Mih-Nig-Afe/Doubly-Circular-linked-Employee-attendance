@echo off
echo Compiling Group 2 Doubly Circular Attendance System...
echo (Beginner-Friendly Version with Perfect Table Formatting)
g++ doubly_circular_attendance.cpp -o final_attendance.exe
if %errorlevel% == 0 (
    echo Compilation successful!
    echo Running the program...
    echo.
    final_attendance.exe
) else (
    echo Compilation failed!
    pause
)
