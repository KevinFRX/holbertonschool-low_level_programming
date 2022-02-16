#include "main.h"

/**
* print_number - prints an integer
* @n: the number
*
* Return: Nothing
*/

void print_number(int n)
{
	int a, b, c;

	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		_putchar('1');
		_putchar('4');
		_putchar('7');
		_putchar('4');
		_putchar('8');
		_putchar('3');
		_putchar('6');
		_putchar('4');
		_putchar('8');
	}
	else
	{
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
}
