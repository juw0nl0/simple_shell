#include <stdio.h>
#include <stdlib.h>

/**
  * main- function that read an entire line of text from a file stream(stdin)
  * Return: character the user entered
  */
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	while (1)
	{
		printf("$ ");
		nread = getline(&line, &len, stdin);

		if (nread == -1)
		{
			printf("\n");
			exit(EXIT_FAILURE);
		}
		line[nread - 1] = '\0';

		if (*line != '\0')
		{
			printf("%s\n", line);
		}
	}
	free(line);
	return (0);
}
