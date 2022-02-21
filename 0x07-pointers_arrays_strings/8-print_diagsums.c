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

	for (i = 0; i < size; i++)
	{
		b += a[i][i];
		for (j = size, i = 0; i < size; j--, i++)
		{
			c += a[i][j];
		}
	}
	printf("%d, %d\n", b, c);
}
