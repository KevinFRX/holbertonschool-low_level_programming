#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: The last digit.
 */

int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
