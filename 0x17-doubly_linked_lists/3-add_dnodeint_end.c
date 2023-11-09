#include "lists.h"
/**
 * add_dnodeint_end - check the code
 * @n: num
 * @head: head
 * Return: adress.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	while (*head)
	{
		*head = (*head)->next;
	}
	new->prev = *head;
	return (new);
}
