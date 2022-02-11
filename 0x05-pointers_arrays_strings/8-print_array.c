#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @n: n
 * @a: array
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	putchar('\n');
}
