#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string
 *
 * Return: pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	int a = 1, b;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[a])
		a++;

	s = malloc(a * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		s[b] = str[b];

	return (s);
}
