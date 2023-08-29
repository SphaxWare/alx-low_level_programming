#include "lists.h"
/**
 * free_listint - check the code
 * @head:pointer to the pointer to first elem
 * @n:value to add to the new node
 * Return: adress of new element or null.
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	while (current != NULL)
	{
		current = head;
		free(current);
		head = head->next;
	}
}
