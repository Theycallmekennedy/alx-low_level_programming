#include "main.h"

/**
 *_isalpha- function checks for alphabets
 *
 *@c:this is the parameter to be tested
 *
 * Return: returns 1 if char is an alphabet else returns 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
