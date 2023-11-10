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
	unsigned int i = 0;
	dlistint_t *new, *tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (tmp)
	{
		if (i == idx)
		{
			if (tmp->next == NULL)
				return (add_dnodeint_end(h, n));
			new->next = tmp;
			new->prev = tmp->prev;
			tmp->prev->next = new;
			tmp->prev = new;
			return (new);
		}
		i++;
		tmp = tmp->next;
	}
	free(new);
	return (NULL);
}
