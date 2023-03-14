#include <stdlib.h>
#include "main.h"
/**
 * create_array - check the code for ALX School students.
 * @size: argument for size of the array
 * @c: argument for char
 * Return: A pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i = 0;

	my_array = malloc(size * sizeof(c));

	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		if (my_array == NULL)
		{
			return (NULL);
		}
		my_array[i] = c;
		i++;
	}
	return (my_array);
}
