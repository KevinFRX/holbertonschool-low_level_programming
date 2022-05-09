#include "main.h"

/**
* _strchr - locates a character in a string
* @s: string
* @c: character
*
* Return: s or NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	}
	if (s[i] == c)
	{
		s += i;
		return (s);
	}
	return ('\0');
}
