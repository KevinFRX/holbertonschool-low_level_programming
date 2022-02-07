#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: n
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
