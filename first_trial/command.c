#include "shell.h"

/**
  * readCommand - function that read the user command from standard input
  * Return: The pointer to the allocated memory containing the user's input.
  */
char *readCommand()
{
	char *line = NULL;
	size_t len = 0;

	getline(&line, &len, stdin);
	return (line);
}

/**
  * parseCommand - function that breakdown users input into
  * command and arguement(token) and store then in an array
  * @command: pointer to the command entered by the user
  * @args: parsed element of the command
  * Return: void
  */
void parseCommand(char *command, char **args)
{
	char *token =  strtok(command, " \n");
	int i = 0;

	while (token != NULL)
	{
		args[i++] = token;
		token = strtok(NULL, " \n");
	}
	args[i] = NULL;
}
