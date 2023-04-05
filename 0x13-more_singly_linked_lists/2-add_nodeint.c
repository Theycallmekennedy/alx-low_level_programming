#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - a function that adds node at the beginning of listint_t list
 *
 * @head: the pointer to a pointer to head of listint_t
 *
 * @n: an integer value
 *
 * Return: the address of new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	if (head == NULL)
	{
		return (NULL);
	}

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
	{
		return (NULL);
	}

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
