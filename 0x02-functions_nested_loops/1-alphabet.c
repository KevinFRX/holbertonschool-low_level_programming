#include <stdio.h>
#include "_putchar.c"

/**
 * print_alphabet - prints the alphabet.
 *
 * Return: Nothing.
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
