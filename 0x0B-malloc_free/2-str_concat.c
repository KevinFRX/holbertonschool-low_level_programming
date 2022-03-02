#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * 
 * Return: pointer to a newly allocated space in memory or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, i;
	char *s;

	if (s1 == NULL)
		;
	else
		while (s1[a])
			a++;

	if (s2 == NULL)
		;
	else
		while (s2[b])
			b++;

	s = malloc((a + b + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		s[i] = s1[i];

	for (i = 0; i < b; i++)
		s[i + a] = s2[i];

	s[a + b] = '\0';

	return (s);
}
