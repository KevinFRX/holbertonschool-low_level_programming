#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: The last digit.
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	else
	{
		_putchar((n % 10) * -1 + '0');
		return ((n % 10) * -1);
	}
}
