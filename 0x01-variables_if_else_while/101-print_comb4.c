#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';

	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				if (a != b && b != c && a != c && a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					putchar(',');
					putchar(' ');
				}
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
	putchar('\n');
	return (0);
}
