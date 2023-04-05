#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **current;
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
 * print_listint_safe - this prints a listint_t linked list.
 * @head: a pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **temp = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == temp[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(temp);
				return (num);
			}
		}
		num++;
		temp = _r(temp, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(temp);
	return (num);
}
