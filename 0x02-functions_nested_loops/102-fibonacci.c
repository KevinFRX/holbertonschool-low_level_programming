#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i, a = 1;

	for (i = 0; i < 50; i++)
	{
		a = a + i;
		if (i != 49)
		{
			printf("%d, ", a);
		}
		else
		{
			printf("%d", a);
		}
	}
	printf("\n");
	return (0);
}
