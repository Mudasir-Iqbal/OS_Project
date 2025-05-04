// locker.c
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "locker.h"
#include "logger.h"

void lock_file(const char* filename) {
    char filepath[200];
    snprintf(filepath, sizeof(filepath), "files/%s", filename);
    if (access(filepath, F_OK) != 0) {
        printf("File does not exist.\n");
        return;
    }
    chmod(filepath, 0000);
    log_access(filename, "LOCKED");
    printf("File locked successfully.\n");
}

void unlock_file(const char* filename) {
    char filepath[200];
    snprintf(filepath, sizeof(filepath), "files/%s", filename);
    if (access(filepath, F_OK) != 0) {
        printf("File does not exist.\n");
        return;
    }
    chmod(filepath, 0644);
    log_access(filename, "UNLOCKED");
    printf("File unlocked successfully.\n");
}

