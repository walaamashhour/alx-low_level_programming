#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to first node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		head = head->next;
		node = head;
		free(head);
	}
}

