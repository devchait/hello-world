#ifndef VAS_LOGGING_H
#define VAS_LOGGING_H
#include<stdio.h>

FILE *log_stream;
void log_data(const char* func, const char *message, FILE *stream){
    fprintf(stream, "%s: %s\n", func, message);
}

#define log(message) log_data(__func__, message, log_stream)

#endif
