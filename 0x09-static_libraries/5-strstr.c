#include "main.h"

/**
* _strstr - locates a substring
* @haystack: first string
* @needle: second string
*
* Return: haystack or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a] != '\0')
	{
		while (needle[b] != '\0')
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
