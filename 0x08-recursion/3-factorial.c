#include "main.h"

/**
* factorial - returns the factorial of a given number
* @n: the number
*
*
* Return: the result
*/

int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
