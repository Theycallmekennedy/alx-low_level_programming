#include "main.h"
/**
 * _strchr - function that locates a character in a string
 *
 * @c: character to search for
 *
 * @s: pointer to the string
 *
 * Return: pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
		return (s);
}
