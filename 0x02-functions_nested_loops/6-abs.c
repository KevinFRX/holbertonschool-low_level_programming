#include "main.h"

/**
 * int _abs(int) - computes the absolute value of an integer
 * @i: the integer
 * Return: The absolute value
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
