#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: the matrix
* @size: matrix size
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, j, b = 0, c = 0;

	for (j = 0, i = 1; i < size ; j += size + 1, i++)
	{
		b += a[j];
	}
	for (j = size - 1, i = 1; i < size; j += size - 1, i++)
	{
		c += a[j];
	}
	printf("%d, %d\n", b, c);
}
