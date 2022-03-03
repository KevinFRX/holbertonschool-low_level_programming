#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: parameters number
 * @av: pointer to the parameters
 *
 * Return: the string or NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, size = 0, a = 0;
	char *str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		size += _strlen(av[i]);

	str = malloc((size + ac) + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0; j <= _strlen(av[i]); j++)
		{
			if (av[i][j] == '\0')
				str[a] = '\n';
			else
					str[a] = av[i][j];
			a++;
		}
	}
	str[a] = '\0';
	return (str);
}
