#include "main.h"

/**
* *_strcat - concatenates two strings
* @dest: first string
* @src: second string
*
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int a, b = 0;

	while (dest[b] != '\0')
	{
		b++;
	}
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b] = src[a];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
