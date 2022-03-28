#include "main.h"

/**
 * main - displays the information contained in the ELF header
 * at the start of an ELF file
 * @argc: argc
 * @argv: argv
 *
 * Return: 1
 */

int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
