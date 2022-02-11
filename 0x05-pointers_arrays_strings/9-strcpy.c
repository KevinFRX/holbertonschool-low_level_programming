#include "main.h"

/**
 * *_strcpy - copies string pointed to by src to buffer pointed to by dest
 * @dest: pointer to string
 * @src: pointer to buffer
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
