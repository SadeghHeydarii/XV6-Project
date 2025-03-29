#ifndef CUSTOM_LOGGER_H
#define CUSTOM_LOGGER_H

enum LogLevel {
    INFO = 0,
    WARN = 1,
    ERROR = 2
};

void log_message(int level, const char *message);

#endif