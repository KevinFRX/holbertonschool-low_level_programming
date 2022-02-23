#include "main.h"

/**
* is_prime_number - returns 1 if is a prime number, otherwise return 0
* @n: the number
*
* Return: 1 or 0
*/

int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
* prime - a
* @n: the number
* @a : a
*
* Return: XD
*/

int prime(int n, int a)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % a == 0 && a > 1)
	{
		return (0);
	}
	if ((n / a) < a )
	{
		return (1);
	}
	return (prime(n, a + 1));
}
