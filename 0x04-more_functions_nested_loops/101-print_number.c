#include "main.h"

/**
* print_number - prints an integer
* @n: number
*
* Return: Nothing.
*/

void print_number(int n)
{
	int b = n, c = 1;

	if (n < 0)
	{
		_putchar(45);
		while (b <= -10)
		{
			b /= 10;
			c *= 10;
		}
		for (; c >= 1; c /= 10)
		{
			_putchar((((n / c) % 10) * -1) + 48);
		}
	}
	else
	{
		while (b >= 10)
		{	
			b /= 10;
			c *= 10;
		}
		for (; c >= 1; c /= 10)
		{
			_putchar(((n / c) % 10) + 48);
		}
	}
}
