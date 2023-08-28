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

	if (h == NULL)
		return (nodes);
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
