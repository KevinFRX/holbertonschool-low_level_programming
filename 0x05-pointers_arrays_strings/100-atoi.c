#include "main.h"

/**
 * _atoi -  convert a string to an integer
 * @s: string
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int i = 0, sig = 1, res = 0, boo = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sig *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			res *= 10;
			res += (s[i] - '0');
			boo = 1;
		}
		else if (boo == 1)
		{
			break;
		}
		i++;
	}
	res *= sig;
	return (res);
}
