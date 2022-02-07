#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char ptch[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(ptch[i]);
	}
	_putchar('\n');
	return (0);
}
