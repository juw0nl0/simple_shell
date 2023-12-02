#include "shell.h"

/**
  * _printf - a simple printf function
  * @input: characte to print to std output
  */

void _printf(const char *input) {
	write(1, input, strlen(input));
}
