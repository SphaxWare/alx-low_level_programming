#include "lists.h"
/**
 * add_dnodeint_end - check the code
 * @n: num
 * @head: head
 * Return: adress.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (temp)
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
		new->prev = temp;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	return (new);
}
