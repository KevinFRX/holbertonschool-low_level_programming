#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @s: the string
*
* Return: the new string
*/

char *cap_string(char *s)
{
	int i = 0, j, k;
	char sow[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i - 1; j++)
	{
		for (k = 0; sow[k] != '\0'; k++)
		{
			if (s[j] == sow[k])
			{
				if (s[j + 1] >= 'a' && s[j + 1] <= 'z')
				{
					s[j + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
