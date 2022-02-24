#include "main.h"

/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not
* @s: the string
*
* Return: 1 or 0
*/

int is_palindrome(char *s)
{
	if (*s == '0')
	{
		return (1);
	}
	return (check_palindrome(s));
}

/**
* check_palindrome - returns 1 if a string is a palindrome and 0 if not
* @s: the string
*
* Return: 1 or 0
*/

int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}
	return (1);
}

/**
* _strlen_recursion -  returns the length of a string
* @s: the string
*
* Return: the length
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

