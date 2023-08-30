#include "lists.h"

/**
 * insert_nodeint_at_index - check code
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointeror NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; *head && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = (*head)->next;
			(*head)->next = new;
			return (new);
		}
		else
			*head = (*head)->next;
	}

	return (NULL);
}
