#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: the string @src is added to
 * @src: the string to be appended
 *
 * Return: pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int str1;
	int str2;
	int i;

	str1 = 0;
	str2 = 0;

	while (src[str1] != '\0')
		str1++;

	while (dest[str2] != '\0')
		str2++;

	for (i = 0; i <= str1; i++)
	{
		dest[str2] = src[i]
		str2++;
	}

	return (dest);
}
