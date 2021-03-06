#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, j, res = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
