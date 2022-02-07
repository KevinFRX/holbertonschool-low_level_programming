#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i, a = 0, b = 1, c;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i != 49)
		{
			printf("%d, ", c);
		}
		else
		{
			printf("%d", c);
		}
	}
	printf("\n");
	return (0);
}
