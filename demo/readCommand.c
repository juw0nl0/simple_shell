#include "shell.h"

/**
  * readCommand- function that splits a string into token and returns
  * an array of each word of the string.
  * Return: 0
  */
char readCommand(void)
{
	char *token;

	token = strtok(line, " ");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
