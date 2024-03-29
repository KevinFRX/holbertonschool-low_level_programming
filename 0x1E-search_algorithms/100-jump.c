#include "search_algos.h"

/**
 * jump_search - x
 * @array: x
 * @size: x
 * @value: x
 *
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0, step = 0;

	if (!array)
		return (-1);
	step = sqrt(size);
	for (i = 0; i < size; i += step)
	{
		if (i == 0)
		{
			if (array[i] == value)
			{
				printf("Value checked array[%lu] = [%i]\n", i, array[i]);
				printf("Value found between indexes [%lu] and [%lu]\n",
				       i, i + step);
				printf("Value checked array[%lu] = [%i]\n", i, array[i]);
				return (i);
			}
			else
			{
				printf("Value checked array[%lu] = [%i]\n", i, array[i]);
				continue;
			}
		}
		if (value <= array[i])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i - step, i);
			for (j = i - step; j <= i; j += 1)
			{
				printf("Value checked array[%lu] = [%i]\n", j
				       , array[j]);
				if (array[j] == value)
					return (j);
			}
		}
		else
			printf("Value checked array[%lu] = [%i]\n", i, array[i]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - step, i);
	printf("Value checked array[%lu] = [%i]\n", i - step, array[i - step]);
	return (-1);
}
