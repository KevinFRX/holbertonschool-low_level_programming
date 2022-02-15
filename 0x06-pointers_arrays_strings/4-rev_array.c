#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: the array
* @n: number of elements of the array
*
* Return: Nothing
*/

void reverse_array(int *a, int n)
{
	int j, k, *s, b;

	s = a;

	for (j = 1; j < n; j++)
	{
		s++;
	}
	for (k = 0; k < (n / 2); k++)
	{
		b = a[k];
		a[k] = *s;
		*s = b;
		s--;
	}
}
