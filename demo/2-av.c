#include <stdio.h>
#include <stdlib.h>

/**
  * main - common shell main function
  * @ac: number of items in av
  * @av: Null terminated array of strings
  * Return: number of argument in av
  */
int main(int ac, char **av)
{
	int num_of_arg = 0;

	while (av[num_of_arg] != NULL)
	{
		printf("%s \n", av[num_of_arg]);
		num_of_arg++;
	}
	printf("Number of argment is: %d\n", ac);
	return (0);
}
