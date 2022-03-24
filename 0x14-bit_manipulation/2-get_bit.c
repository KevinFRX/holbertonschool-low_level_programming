#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: n
 * @index: index
 * Return: the value of the bit or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n > 0)
	{
		if (i == index)
		{
			if (n % 2 == 1)
				return (1);
			else
				return (0);
		}
		n /= 2;
		i++;
	}
	if (index > i && index < 63)
		return (0);

	return (-1);
}
