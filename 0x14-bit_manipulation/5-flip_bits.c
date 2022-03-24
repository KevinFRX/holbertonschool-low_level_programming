#include "main.h"

/**
  * flip_bits - returns the number of bits you would need
  * to flip to get from one number to another
  * @n: n
  * @m: m
  *
  * Return: the number of bits you would need
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int l;

	for (l = n ^ m; l != 0; l = l >> 1)
		count += l & 1;
	return (count);
}
