#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long i = 0, a = 0, b = 1, c;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			i = i + c;
		}
	}
	printf("%lu\n", i);
	return (0);
}
