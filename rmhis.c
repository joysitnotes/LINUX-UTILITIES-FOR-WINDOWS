// Delete Powershell commandline history
#include <stdio.h>
#include <windows.h>

int main(void) {
    system("powershell -Command \"Remove-Item -Path $HOME\\AppData\\Roaming\\Microsoft\\Windows\\PowerShell\\PSReadLine\\ConsoleHost_history.txt -Force\"");
    return 0;
}
