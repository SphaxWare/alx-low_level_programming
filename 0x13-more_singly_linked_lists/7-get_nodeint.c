#include "lists.h"

/**
 * get_nodeint_at_index - check code
 * @head: first node in the linked list
 * @index: index of the node
 * Return: pointer or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);
	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (NULL);
	else
		return (temp);
}
