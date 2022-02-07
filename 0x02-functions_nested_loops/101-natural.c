#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int i, num = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
		{
			num += i;
		}
	}
	printf("%d\n", num);
	return (0);
}
