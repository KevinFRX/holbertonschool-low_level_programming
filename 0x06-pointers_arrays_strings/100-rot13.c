#include "main.h"

/**
* rot13 - encodes a string using rot13
* @s: the string
*
* Return: The new string
*/

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			{
				s[i] += 13;
				break;
			}
			s[i] -= 13;
			break;
		}
	}
	return (s);
}
