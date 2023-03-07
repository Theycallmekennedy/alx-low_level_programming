#include "main.h"
/**
 * _memcpy - function that copies @n bytes from memory area @src
 * to memory area @dest
 *
 * @n: function copies
 *
 * @src: bytes from memory area
 *
 * @dest: to memory area
 *
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d = 0;

	while (n > d)
	{
		dest[d] = src[d];
		d++;
	}

	return (dest);
}
