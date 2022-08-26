#include "search_algos.h"

/**
 * binary_search - x
 * @array: x
 * @size: x
 * @value: x
 *
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, m, L, R;

	if (!array)
		return (-1);

	for (L = 0, R = size -1; L <= R;)
	{
		m = (L + R) / 2;

		printf("Searching in array: ");
		for (i = L; i < R; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);

		if (array[m] == value)
			return (m);

		if (array[m] < value)
			L = m + 1;

		else
			R = m - 1;
	}
	return (-1);
}
