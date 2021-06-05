/*

main.c - Main source file for Synax Console

*/

/* Header declaration */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

/* Called for custom exceptions */
void Error(int FatalErr, char* ErrMessage)
{
    if (FatalErr)
    {
        /* Triggered on a fatal error */
        printf("Fatal: %s\n", ErrMessage);
        printf("Exiting.\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        /* Triggered on a recoverable error */
        printf("Error: %s\n", ErrMessage);
    }
}

int main()
{
    /* Startup message */
    printf("Running Synax Console");
    #ifdef _WIN32
    printf(" on Windows");
    #endif
    #ifdef __APPLE__
    printf(" on macOS");
    #endif
    #ifdef __linux__
    printf(" on GNU/Linux");
    #endif
    printf("\n");

    ;
}