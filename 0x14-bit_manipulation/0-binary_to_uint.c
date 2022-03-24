#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: b
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, m = 1;
	unsigned int res = 0;

	if (!b)
		return (0);

	while (b[i])
		i++;

	for (i--; i >= 0; i--, m *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			res += m;
	}

	return (res);
}
