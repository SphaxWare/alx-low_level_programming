#include "lists.h"
/**
 * free_listint2 - check the code
 * @head:pointer to the pointer to first elem
 * Return: adress of new element or null.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = *(head)->next;
		free(current);
	}
	*head = NULL;
}
