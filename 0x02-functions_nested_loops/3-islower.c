#include "main.h"

/**
 *_islower- function checks if an alphabet is in lowercase
 *
 *@b:this is the parameter to be tested
 *
 * Return: returns 1 if char is lowercase otherwise 0
 */

int _islower(int b)
{
	if (b >= 'a' && b <= 'z')
		return (1);
	else
		return (0);
}
