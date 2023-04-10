#include "main.h"
#include "stddef.h"

/**
 * binary_to_uint - this function converts a binary number to unsigned integer
 *
 *@b: a pointer to string of chars
 *
 *Return: the converted unsigned int, or 0 if NULL
 */

unsigned int binary_to_uint(const char *b)
{
	const char *c;
	unsigned int result;

	c = b;
	result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*c != '\0')
	{
		if (*c == '0')
		{
			result = (result * 2) | 0;
		}
		if (*c == '1')
		{
			result = (result * 2) | 1;
		}
		if (*c != '0' && *c != '1')
			return (0);
	++c;
	}
	return (result);
}
