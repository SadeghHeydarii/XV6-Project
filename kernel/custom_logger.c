#include "types.h"
#include "riscv.h"
#include "custom_logger.h"
#include "defs.h"

void log_message(int level, const char *message) {
    switch (level) {
        case INFO:
            printf("\033[32mINFO — %s\033[0m\n", message); 
            break;
        case WARN:
            printf("\033[33mWARNING — %s\033[0m\n", message); 
            break;
        case ERROR:
            printf("\033[31mERROR — %s\033[0m\n", message);
            break;
        default:
            printf("UNKNOWN — %s\n", message);
            break;
    }
}
