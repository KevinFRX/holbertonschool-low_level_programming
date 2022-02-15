#include "main.h"

/**
* leet - encodes a string into 1337
* @s: the string
*
* Return: the new string
*/

char *leet(char *s)
{
	int i, j;
	char l[] = {65, 69, 79, 84, 76, 52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (l[j] == s[i] || l[j] + 32 == s[i])
			{
				s[i] = l[j + 5];
			}
		}
	}
	return (s);
}
