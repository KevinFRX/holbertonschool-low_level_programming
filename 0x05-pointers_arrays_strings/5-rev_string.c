#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, j, k;
	char *a;

	i = 0;
	a = s;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 1; j < i; j++)
	{
		a++;
	}
	for (k = 0; k < i; k++)
	{
		s[k] = *a;
		a--;
	}
}
