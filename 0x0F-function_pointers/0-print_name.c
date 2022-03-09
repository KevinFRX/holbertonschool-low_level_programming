#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: f
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *name))
{
	f(name);
}
