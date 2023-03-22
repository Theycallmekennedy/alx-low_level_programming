#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: parameter for array
 * @size: parameter for action
 * @action: The function to be executed on each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
