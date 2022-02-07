#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: n
 *
 * Return: Nothing.
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (k < 10)
					{
						_putchar(' ');
						_putchar(k + '0');
					}
					else
					{
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
					}
				}
				else
				{
					_putchar(k + '0');
				}
			}
			_putchar('\n');
		}
	}
}
