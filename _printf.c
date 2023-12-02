#include "shell.h"

/**
  * _printf - a simple printf function
  * @input: characte to print to std output
  */

void _printf(const char *str) {
	write(1, str, strlen(str));
	write(1, "\n", 1);  // Add a newline character
}
