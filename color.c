#include <stdio.h>
#include <windows.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    // Set text color to red
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("Red text\n");

    // Reset text color to default
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    printf("Default text\n");

    return 0;
}