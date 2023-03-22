#include "function_pointers.h"

/**
 * print_name - Calls a function with a given name.
 * @name: The name to be passed to the function.
 * @f: The function to be called.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
