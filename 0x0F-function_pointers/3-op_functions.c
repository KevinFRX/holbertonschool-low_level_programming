#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * op_add - a
  * @a: a
  * @b: a
  *
  * Return: a
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - a
  * @a: a
  * @b: a
  *
  * Return: a
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - a
  * @a: a
  * @b: a
  *
  * Return: a
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - a
  * @a: a
  * @b: a
  *
  * Return: a
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - a
  * @a: a
  * @b: a
  *
  * Return: a
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
