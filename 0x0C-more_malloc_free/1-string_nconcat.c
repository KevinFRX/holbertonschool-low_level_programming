#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: the firts n bytes of s2
  *
  * Return: s1 or NULL if malloc fails
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, i, j = 0;
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

	if (n > b)
		n = b;

	s = malloc((a + n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		s[i] = s1[i];

	for (i = 0; i < n; i++)
		s[a + i] = s2[i];

	s[j] = '\0';
	return (s);
}
