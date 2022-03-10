#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: n
 *
 * Return: the sum of all its parameters or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i, res = 0;

	va_start(va, n);
	for (i = 0; i < n; i++)
		res += va_arg(va, int);
	return (res);
}
