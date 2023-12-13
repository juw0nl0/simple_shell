#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int displayPrompt(void);
char *readCommand();
void parseCommand(char *command, char **args);


#endif /* SHELL_H */
