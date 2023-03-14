#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new string
 * @str: An input pointer to the string that should be copied
 * Return: A pointer to the string and returns NULL if string is NULL
 */
char *_strdup(char *str)
{
	char *new_str, *start;
	int i = 0;
	size_t len = 0;

	if (str == NULL)
		return (NULL);

	start = str;

	while (*str)
	{
		len++;
		str++;
	}
	str = start;
	new_str = malloc(sizeof(char) * (len + 1));
	start = new_str;

	if (new_str != NULL)
	{
		for (; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		return (start);
	}
	else
	{
		return (NULL);
	}
}