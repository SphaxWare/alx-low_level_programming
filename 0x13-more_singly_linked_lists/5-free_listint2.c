#include "lists.h"
/**
 * free_listint2 - check the code
 * @head:pointer to the pointer to first elem
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(current);
		*head = current;
	}
	*head = NULL;
}
