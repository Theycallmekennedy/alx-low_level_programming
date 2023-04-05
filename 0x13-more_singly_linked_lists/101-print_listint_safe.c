#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - This function prints a listint_t linked list
 * @head: Pointer to the first node of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current_ptr = head, *check_ptr = head;

	while (current_ptr && check_ptr && check_ptr->next)
	{
		printf("[%p] %d\n", (void *) current_ptr, current_ptr->n);
		count++;

		current_ptr = current_ptr->next;
		check_ptr = check_ptr->next->next;

		if (current_ptr == check_ptr)
		{
			current_ptr = head;
			while (current_ptr != check_ptr)
			{
				printf("[%p] %d\n", (void *) current_ptr, current_ptr->n);
				count++;
				current_ptr = current_ptr->next;
				check_ptr = check_ptr->next;
			}
			printf("[%p] %d\n", (void *) current_ptr, current_ptr->n);
			count++;
			break;
		}
	}

	if (!current_ptr || !check_ptr)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			count++;
			head = head->next;
		}
	}
	return (count);
}
