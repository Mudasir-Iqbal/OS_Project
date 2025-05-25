#include <stdio.h>
#include <string.h>
#include <termios.h> // for hidden password input
#include <stdlib.h>
#include "locker.h"
#include "logger.h"
void getPassword(char *password, int maxLen) {
    struct termios oldt, newt;
    printf("Enter password: ");
    tcgetattr(fileno(stdin), &oldt);
    newt = oldt;
    newt.c_lflag &= ~ECHO; // Turn off echo
    tcsetattr(fileno(stdin), TCSANOW, &newt);
    fgets(password, maxLen, stdin);
    tcsetattr(fileno(stdin), TCSANOW, &oldt);
    printf("\n");
    password[strcspn(password, "\n")] = 0; // Remove newline
}



int main() {
    int choice;
    char filename[100];
char inputPass[50];
const char *correctPass = "123"; // you can change this

getPassword(inputPass, sizeof(inputPass));

if (strcmp(inputPass, correctPass) != 0) {
    printf("❌ Incorrect password. Access denied.\n");
    return 1;
}
printf("✅ Access granted.\n\n");


    while (1) {
        printf("\n===== File Locker Menu =====\n");
        printf("1. Lock a File\n");
        printf("2. Unlock a File\n");
        printf("3. View Access Logs\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter file to lock (in files/ folder): ");
                scanf("%s", filename);
                lock_file(filename);
                break;
            case 2:
                printf("Enter file to unlock (in files/ folder): ");
                scanf("%s", filename);
                unlock_file(filename);
                break;
            case 3:
                view_logs();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}

