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

	while (1)
	{
		printf("$ ");
		getline(&line, &len, stdin);
		printf("%s", line);
	}
	return (0);
}
