#include "main.h"

/**
* *_strncpy - copies a string
* @dest: first string
* @src: second string
* @n: number
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a, b = 0;

	while (src[b] != '\0')
	{
		b++;
	}
	if (b >= n)
	{
		for (a = 0; a < n; a++)
		{
			dest[a] = src[a];
		}
	}
	else
	{
		for (a = 0; a < b; a++)
		{
			dest[a] = src[a];
		}
		while (b < n)
		{
			dest[b] = '\0';
			b++;
		}
	}
	return(dest);
}
