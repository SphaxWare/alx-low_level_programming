#include "lists.h"
/**
 * add_dnodeint - check the code
 * @n: num
 * @head: ehad
 * Return: adress.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	(*head)->prev = new;
	new->n = n;
	return (new);	
}
