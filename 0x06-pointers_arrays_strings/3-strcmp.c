#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
*
* Return: -1 if s1 is less, 0 if match, 1 if greater
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0;

	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	if (a < b)
	{
		return (-1);
	}
	else if (a == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
