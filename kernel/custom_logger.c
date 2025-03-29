#include "types.h"
#include "riscv.h"
#include "custom_logger.h"
#include "defs.h"

void log_message(int level, const char *message) {
    switch (level) {
        case INFO:
            printf("\033[32m[INFO]: %s\033[0m\n", message); 
            break;
        case WARN:
            printf("\033[33m[WARNING]: %s\033[0m\n", message); 
            break;
        case ERROR:
            printf("\033[31m[ERROR]: %s\033[0m\n", message);
            break;
        default:
            printf("[UNKNOWN]: %s\n", message);
            break;
    }
}
