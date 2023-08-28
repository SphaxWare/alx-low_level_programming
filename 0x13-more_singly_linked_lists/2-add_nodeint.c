#include "lists.h"
/**
 * add_nodeint - check the code
 * @head:pointer to the pointer to first elem
 * @n:value to add to the new node
 * Return: adress of new element or null.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
