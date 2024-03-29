#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _ra - this reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **current;
	size_t i;

	current = malloc(size * sizeof(listint_t *));
	if (current == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		current[i] = list[i];
	current[i] = new;
	free(list);
	return (current);
}

/**
 * free_listint_safe - this frees a listint_t linked list.
 * @head: a double pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;
	listint_t **temp = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == temp[i])
			{
				*head = NULL;
				free(temp);
				return (num);
			}
		}
		num++;
		temp = _ra(temp, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(temp);
	return (num);
}
