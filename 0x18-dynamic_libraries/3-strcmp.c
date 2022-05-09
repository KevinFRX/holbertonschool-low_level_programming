#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
*
* Return: negative if s1 is less, 0 if match, positive if greater
*/

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	}
	return (0);
}
