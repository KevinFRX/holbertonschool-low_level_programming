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
	char *a = needle, *b = haystack;

	while (*haystack)
	{
		b = haystack;
		needle = a;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack = b + 1;
	}
	return ('\0');
}
