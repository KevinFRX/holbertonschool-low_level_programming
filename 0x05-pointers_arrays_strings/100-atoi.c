#include "main.h"

/**
 * _atoi -  convert a string to an integer
 * @s: string
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int i, sig = 1, res;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sig *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			res *= 10;
			res -= (s[i] - '0');
		}
		i++;
	}
	res *= sig;
	return (res);
}
