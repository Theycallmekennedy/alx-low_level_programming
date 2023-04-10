#include "main.h"

/**
 * get_endianness - Determines the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int var;

	char *c = (char *)&var;

	var = 1;

	if (*c)
		return (1);
	else
		return (0);
}
