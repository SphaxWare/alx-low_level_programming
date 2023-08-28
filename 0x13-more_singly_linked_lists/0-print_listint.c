#include "lists.h"

/**
 * print_listint - print node elements
 * @h: points to the node
 *
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *temp = h;

	if (h == NULL)
		return (nodes);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
