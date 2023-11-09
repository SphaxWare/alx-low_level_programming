#include "lists.h"
/**
 * free_dlistint - look
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	if (head)
	{
		current = head;
		next = head->next;
		while (next)
		{
			free(current);
			current = next;
			next = next->next;
		}
		free(current);
	}
}
