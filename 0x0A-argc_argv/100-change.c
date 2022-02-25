#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int cents, res = 0, i;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (cents >= coins[i])
			{
				res += (cents / coins[i]);
				cents %= coins[i];
			}
			if (cents == 0)
			{
				printf("%d\n", res);
			}
		}
	}
	return (0);
}
