#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to get from n to m
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned int j;

	j = 0;
	res = n ^ m;

	while (res != 0)
	{
		j += res & 1;
		res >>= 1;
	}

	return (j);
}

