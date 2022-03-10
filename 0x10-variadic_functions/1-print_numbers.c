#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_numbers - prints numbers
  * @separator: the string to be printed between numbers
  * @n: number of integers passed to the function
  *
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
