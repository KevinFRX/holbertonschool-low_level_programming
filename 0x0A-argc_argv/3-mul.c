#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
