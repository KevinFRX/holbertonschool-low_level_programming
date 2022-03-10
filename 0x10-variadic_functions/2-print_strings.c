#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_strings - prints strings
  * @separator: the string to be printed between the strings
  * @n:  the number of strings passed to the function
  *
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;
	char *s;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(va, char *);
		if (s)
			printf("%s", s);
		else
			printf("%s", "(nil)");
		if ((i != (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
}
