#include "shell.h"

/**
  * main - entry point to the code
  * Return: Nothing
  */

int main(void)
{
	while (1)
	{
		displayPrompt();
		char *command = readCommand();

		if (strcmp(command, "exit") == 0)
		{
			free(command);  // Free the allocated memory
			break;
		}

		char *args[10];  // Assuming a maximum of 10 arguments
		parseCommand(command, args);
		executeCommand(args);

		free(command);
	}

	return(0);
}
