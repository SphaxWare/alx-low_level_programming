#include "lists.h"
/**
 * get_dnodeint_at_index - check the code
 * @index: indx
 * @head: head
 * Return: index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i = 0;
	dlistint_t *tmp = headd;

	while (tmp)
	{
		if (i == index)
		{
			return tmp;
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
