#include "main.h"

/**
 * _strlen - Returns the length of string.
 * @s: format specifier to the string.
 *
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
