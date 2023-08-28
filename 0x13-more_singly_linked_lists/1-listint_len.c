#include "lists.h"
/**
 * listint_len - check the code
 * @h:pointer to the first element
 * Return: listint len.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *temp = h;

	if (h == NULL)
		return (nodes);
	while (temp != NULL)
	{
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
