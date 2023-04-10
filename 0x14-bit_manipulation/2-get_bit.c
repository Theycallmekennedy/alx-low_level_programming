#include "main.h"

/**
 * get_bit - this returns the value of a bit at a given index
 * @n: the unsigned long int to get bit from
 * @index: an index of bit to get, starting from 0
 *
 * Return: the value of bit at index, or -1 if error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	result = (n & (1UL << index)) >> index;
	
	return (result);
}
