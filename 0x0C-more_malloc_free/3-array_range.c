#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: the pointer to the newly created array or NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *a = NULL;

	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);

	a[0] = min;

	for (i = 1; min <= max; i++, min++)
		a[i] = min + 1;

	return (a);
}
