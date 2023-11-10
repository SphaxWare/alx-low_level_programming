#include "lists.h"
/**
 * insert_dnodeint_at_index - check the code
 * @h:head
 * @idx: ind
 * @n: numba
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	new->next = tmp;
	new->prev = tmp->prev;
	tmp->prev->next = new;
	tmp->prev = new;
	return (new);
}
