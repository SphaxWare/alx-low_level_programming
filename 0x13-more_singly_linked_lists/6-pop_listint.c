#include "lists.h"

/**
 * pop_listint - check the code
 * @head: pointer to the first element in the linked list
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
