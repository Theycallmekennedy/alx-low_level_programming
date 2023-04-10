#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 1 at a given index
 * @n: a pointer to the number to modify
 * @index: an index of the bit to set
 *
 * Return: 1 on success, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int out;
	unsigned long int p;

	out = 1;
	p = index;

	if (p >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	out <<= p;
	out = ~out;
	*n &= out;

	return (1);
}

