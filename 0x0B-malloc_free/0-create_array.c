#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array
 * @size: argument for size of the array
 * @c: argument for character
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	char *my_array = (char *) malloc(size * sizeof(c));

	if (my_array == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		my_array[i] = c;
	}
	return (my_array);
}
