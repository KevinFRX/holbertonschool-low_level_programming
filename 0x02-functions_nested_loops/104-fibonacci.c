#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i, ex;
	unsigned long a = 1, b = 1, c;
	unsigned long ain, afi, bin, bfi, cin, cfi;

	printf("1");
	for (i = 0; i < 93; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %lu", c);
	}
	ain = a / 1000000000;
	afi = a % 1000000000;
	bin = b / 1000000000;
	bfi = b % 1000000000;

	while (i < 98)
	{
		ex = (afi + bfi) / 1000000000;
		cfi = (afi + bfi) - (1000000000 * ex);
		cin = (ain + bin) + ex;
		printf(", %lu%lu", cin, cfi);
		ain = bin;
		afi = bfi;
		bin = cin;
		bfi = cfi;
		i++;
	}
	printf("\n");
	return (0);
}
