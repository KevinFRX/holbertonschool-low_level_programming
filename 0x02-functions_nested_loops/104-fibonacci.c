#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long i, a = 0, b = 1, c;

	for (i = 0; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i != 97)
		{
			printf("%lu, ", c);
		}
		else
		{
			printf("%lu", c);
		}
	}
	printf("\n");
	return (0);
}
