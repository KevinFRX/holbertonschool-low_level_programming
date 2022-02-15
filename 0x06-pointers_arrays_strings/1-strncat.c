#include "main.h"

/**
* *_strncat - concatenates two strings
* @dest: first string
* @src: second string
* @n: amount of bytes
*
* Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b = 0;

	while (dest[b] != '\0')
	{
		b++;
	}
	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[b] = src[a];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
