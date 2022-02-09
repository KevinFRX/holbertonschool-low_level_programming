#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/

int main(void)
{
	long i, num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			num /= i;
		}
	}
	printf("%li\n", num);
	return (0);
}
