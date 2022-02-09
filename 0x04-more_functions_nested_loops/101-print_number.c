#include "main.h"

/**
* print_number - prints an integer
* @n: number
*
* Return: Nothing.
*/

void print_number(int n)
{
	int a, b, c;

	if (n < 0)
	{
		a = n * -1;
		_putchar(45);
	}
	else
	{
		a = n;
	}
	b = a;
	c = 1;
	while (b >= 10)
	{
		b /= 10;
		c *= 10;
	}
	for (; c >= 1; c /= 10)
	{
		_putchar(((a / c) % 10) + 48);
	}
}
