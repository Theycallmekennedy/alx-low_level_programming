#include "lists.h"

/**
 * find_listint_loop - this function finds the loop in a linked list.
 * @head: a pointer to the beginning of the list
 *
 * Return: the address of the node where loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current, *temp;

	current = temp = head;
	while (current && temp && temp->next)
	{
		current = current->next;
		temp = temp->next->next;
		if (current == temp)
		{
			current = head;
			break;
		}
	}
	if (!current || !temp || !temp->next)
		return (NULL);
	while (current != temp)
	{
		current = current->next;
		temp = temp->next;
	}
	return (temp);
}
