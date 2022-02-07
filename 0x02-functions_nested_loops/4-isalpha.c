#include "main.h"

/**
 * _isalpha - test if the character is from alphabet
 * @c: character to be checked.
 *
 * Return: 1 if it is a character form alphabet and o if not.
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
