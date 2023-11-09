#include "lists.h"
/**
 * print_dlistint - check the code
 * @h: head
 * Return: int.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n)
		i++;
		h = h->next;
	}
	return (i);
}
