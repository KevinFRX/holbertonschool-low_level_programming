#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number
*
* Return: the result
*/

int _sqrt_recursion(int n)
{
        if (n >= 0 )
        {
                return (root(n, 1));
        }
        else
        {
                return (-1);
        }
}

/**
* root - a
* @n: n
* @a: a
*
* Return: a
*/

int root(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	return (root(n, a + 1));
}
