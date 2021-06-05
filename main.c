/*

main.c - Main source file for Synax Console

*/

/* Header declaration */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>

/* Local header declaration */
#include "startup.h"

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

int main(int argc, char* argv[])
{
    /* Startup message */
    printf("Starting Synax Console\n");
    /* If "--nodelay" was specified on the command line, skip the arbitrary 1 second wait */
    if (argc > 1) 
    {
        if (strcmp(argv[1], "--nodelay")) { sleep(1); }
        else {;}
    }
    else { sleep(1); }
    printf(SYN_StartupMessage);

    /* Variable declaration */
    int LoggedIn;
    char* Prompt;
    char path[200];
    char* CurrentWorkingDirectory = getcwd(path, 200);
}