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

	for (i = 0; i < 8; i++)
	{
		_putchar(ptch[i]);
	}
	return (0);
}
