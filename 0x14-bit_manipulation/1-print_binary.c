#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: n
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_binary_aux(n);
}

/**
 * print_binary_aux - aux
 * @n: n
 *
 * Return: void
 */

void print_binary_aux(unsigned long int n)
{
	if (n < 1)
		return;

	print_binary_aux(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
