#include "main"

/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n);
{
	int c;
	int d;

	c = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

	d = 0;

	while (str[d] != '\0')
	{
		dest[c] = src[d];
		d++
		c++;
	}

	dest[c] = '\0';

	return (dest);
}
