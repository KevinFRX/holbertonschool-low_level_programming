#include "main.h"

/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not
* @s: the string
*
* Return: 1 or 0
*/

int is_palindrome(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (1);
	}
	len = _strlen_recursion(s);
	return (check(0, len, s));
}

/**
* check - returns 1 if a string is a palindrome and 0 if not
* @s: the string
* @leng: the length
* @i: i
*
* Return: 1 or 0
*/

int check(int i, int leng, char *s)
{
	if (i > leng / 2)
	{
		return (1);
	}
	else if (s[i] != s[leng - i - 1])
	{
		return (0);
	}
	else
	{
		return (check(i + 1, leng, s));
	}
}

/**
* _strlen_recursion -  returns the length of a string
* @s: the string
*
* Return: the length
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	else
	{
		return (0);
	}
}
