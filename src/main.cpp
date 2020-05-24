#include<logger.h>
#include<sample1.h>

void try_log(){
    log("this is the log from another function");
}

int main(int argc, char **argv)
{
    log_stream = fopen("logs/sample.log", "a");
    log("this is the main output");
    log("Here your details are going to be added");
    log("Value is "+ Factorial(3));
    try_log();
    fclose(log_stream);
    return 0;
}

