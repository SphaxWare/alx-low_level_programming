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
	while (tmp)
	{
		if (i == idx)
		{
			new->next = tmp;
			new->prev = tmp->prev;
			tmp->prev->next = new;
			tmp->prev = new;
			return (new);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
