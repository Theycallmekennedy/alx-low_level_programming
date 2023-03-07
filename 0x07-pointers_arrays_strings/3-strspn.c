#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: pointer
 *
 * @accept: pointer
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int d = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					d++;
			}
		}
		else
			return (d);
	}
		return (d);

}
