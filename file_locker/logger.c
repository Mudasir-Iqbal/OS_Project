#include <stdio.h>
#include <time.h>
#include "logger.h"

void log_access(const char* filename, const char* action) {
    FILE *log = fopen("logs/access.log", "a");
    if (log == NULL) {
        perror("Cannot open log file");
        return;
    }
    time_t now = time(NULL);
    fprintf(log, "%s | %s | %s", action, filename, ctime(&now));
    fclose(log);
}

void view_logs() {
    FILE *log = fopen("logs/access.log", "r");
    if (log == NULL) {
        printf("No logs found.\n");
        return;
    }
    char ch;
    while ((ch = fgetc(log)) != EOF) {
        putchar(ch);
    }
    fclose(log);
}
