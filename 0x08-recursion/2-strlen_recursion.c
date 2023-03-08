#include "main"
/**
 * _strlen_recursion - function that prints the legnth of strings
 * @s: string length
 * Return: length
 */
int _strlen_recursion(char *s);
{
	if (*s == '\0')
	{
		return;
	}
	return (1 + length(s, *s + 1));
}
