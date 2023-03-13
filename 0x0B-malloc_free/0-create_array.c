#include <stdlib.h>
#include "main.h"
/**
 * create_array - check the code for ALX School students.
 * @size: argument for size of the array
 * @c: argument for char
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i = 0
		char* array = (char*) malloc(size * sizeof(char));
	if (array == NULL)
	{
		return NULL;
	}
	for (int i = 0; i < size; i++)
	{
		array[i] = initChar;
	}
	return array;
}
