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

	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				if (a != b && a < b)
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
