#include "main.h"

/**
* _strspn - gets the lenth of a prefix substring
* @s: first string
* @accept: second string
*
* Return: the number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0' && accept[j] != s[i])
		{
			j++;
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
