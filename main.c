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
    if (FatalErr) {
        /* Triggered on a fatal error */
        printf("Fatal: %s\n", ErrMessage);
        puts("Exiting.");
        exit(EXIT_FAILURE);
    } else {
        /* Triggered on a recoverable error */
        printf("Error: %s\n", ErrMessage);
    }
}

int main(int argc, char* argv[])
{
    /* Startup message */
    printf("%s\n", SYN_StartupMessage);

    /* Variable declaration */
    int LoggedIn = 1;
    char Path[200];
    char* Command = "";
    char* CurrentWorkingDirectory = getcwd(Path, 200);

    /* Main loop */
    while (LoggedIn)
    {
	/* Shows prompt and handles input */
	printf("%s\\", getlogin()); printf("%s\\", CurrentWorkingDirectory); printf("synax\n> ");
	fgets(Command, 100, stdin);
	Command[strcspn(Command, "\n")] = 0;

	/* Exit command */
	if (!strcmp(Command, "exit")) {
	    LoggedIn = 0;
	}

	/* Tell the user they can't do anything and they need to exit because I didn't code in functionality yet lol */
	puts("Command processor not implemented. (yet)\nType 'exit' to exit.");
    }
    puts("Exiting.");
    return 0;
}
