#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return NULL;
	}
	int total_len = 0;
	for (int i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}
	char *result = malloc(sizeof(char) * total_len);
	if (result == NULL)
	{
		return NULL;
	}
	int pos = 0;
	for (int i = 0; i < ac; i++)
	{
		int len = strlen(av[i]);
		strncpy(result + pos, av[i], len);
		pos += len;
		result[pos++] = '\n';
	}
	result[pos] = '\0';
	return result;
}
