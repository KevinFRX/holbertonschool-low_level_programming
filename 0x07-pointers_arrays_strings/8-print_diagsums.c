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
	int i, b = 0, c = 0;

	for (i = 0; i < size; i++)
	{
		b += a[(size + 1) * b];
		c *= a[(size - 1) * (b + 1)];

	}
	printf("%d, %d\n", b, c);
}
