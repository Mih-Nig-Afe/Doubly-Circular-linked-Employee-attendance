@echo off
echo Compiling %1...
g++ "%1" -o "%~n1.exe"
if %errorlevel% equ 0 (
    echo Compilation successful!
    echo Running program...
    echo.
    "%~n1.exe"
) else (
    echo Compilation failed!
    pause
)
