#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete node at nth
 * @head: head
 * @index: pos
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (index == i)
		{
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			if (tmp->prev != NULL)
				tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
