#include "shell.h"

/**
  * main - function that splits a string and returns
  * an array of each word of the string.
  * Return: 0
  */
void readCommand(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	char *token;

	while (1)
	{
		displayPrompt();
		nread = getline(&line, &len, stdin);

		if (nread == -1)
		{
			printf("\n");
			exit(EXIT_FAILURE);
		}
		else
		{
			line[nread - 1] = '\0';
			token = strtok(line, " ");

			while (token != NULL)
			{
				printf("%s\n", token);
				token = strtok(NULL, " ");
			}
		}
	}
	free(line);
}
