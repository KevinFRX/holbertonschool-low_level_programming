#include "main.h"

/**
* print_numbers - prints the numbers, from 0 to 9
*
* Return: Nothing.
*/

void print_numbers(void)
{
	int i = 0;

	while (1 <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
