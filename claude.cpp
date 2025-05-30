#include <iostream>
#include <windows.h>
#include <conio.h>
#include <reason.h>

int main() {
    char choice;
    
    std::cout << "Windows Laptop Restart Program\n";
    std::cout << "===============================\n\n";
    std::cout << "WARNING: This will restart your computer!\n";
    std::cout << "Make sure to save all your work before proceeding.\n\n";
    std::cout << "Do you want to restart now? (y/n): ";
    
    choice = _getch();
    std::cout << choice << std::endl;
    
    if (choice == 'y' || choice == 'Y') {
        std::cout << "\nRestarting in 10 seconds...\n";
        std::cout << "Press any key to cancel.\n\n";
        
        // Give user 10 seconds to cancel
        for (int i = 10; i > 0; i--) {
            std::cout << "Restarting in " << i << " seconds...\r";
            std::cout.flush();
            
            // Check if key is pressed
            if (_kbhit()) {
                _getch(); // consume the key
                std::cout << "\nRestart cancelled by user.\n";
                std::cout << "Press any key to exit...";
                _getch();
                return 0;
            }
            
            Sleep(1000); // Wait 1 second
        }
        
        std::cout << "\nInitiating restart...\n";
        
        // Get the required privilege to shut down the system
        HANDLE hToken;
        TOKEN_PRIVILEGES tkp;
        
        // Get a token for this process
        if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken)) {
            std::cout << "Error: Cannot open process token.\n";
            std::cout << "Press any key to exit...";
            _getch();
            return 1;
        }
        
        // Get the LUID for the shutdown privilege
        LookupPrivilegeValue(NULL, SE_SHUTDOWN_NAME, &tkp.Privileges[0].Luid);
        
        tkp.PrivilegeCount = 1;
        tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
        
        // Enable the shutdown privilege
        AdjustTokenPrivileges(hToken, FALSE, &tkp, 0, (PTOKEN_PRIVILEGES)NULL, 0);
        
        if (GetLastError() != ERROR_SUCCESS) {
            std::cout << "Error: Cannot adjust token privileges.\n";
            std::cout << "Press any key to exit...";
            _getch();
            return 1;
        }
        
        // Restart the system
        if (!ExitWindowsEx(EWX_REBOOT | EWX_FORCE, 0)) {
            std::cout << "Error: Failed to restart the system.\n";
            std::cout << "Error code: " << GetLastError() << std::endl;
            std::cout << "Press any key to exit...";
            _getch();
            return 1;
        }
        
    } else {
        std::cout << "\nRestart cancelled.\n";
        std::cout << "Press any key to exit...";
        _getch();
    }
    
    return 0;
}