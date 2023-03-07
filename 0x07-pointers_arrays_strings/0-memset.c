#include "main.h"
/**
 * _memset - function that fills the first @n bytes of the memory area pointed
 * to by @s with the constant byte @b
 *
 * @n: bytes of the memory area pointed to by @s
 *
 * @s: with the constant byte @b
 *
 * @b: memory area pointer
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *i = s;

	while (n--)
	{
		*i++ = b;
	}
	return (s);
}