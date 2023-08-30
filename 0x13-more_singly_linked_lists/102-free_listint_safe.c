#include "lists.h"

/**
 * free_listint_safe_custom - frees a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe_custom(listint_t **head)
{
	size_t length = 0;
	int difference;
	listint_t *temporary;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		difference = *head - (*head)->next;
		if (difference > 0)
		{
			temporary = (*head)->next;
			free(*head);
			*head = temporary;
			length++;
		}
		else
		{
			free(*head);
			*head = NULL;
			length++;
			break;
		}
	}

	*head = NULL;

	return (length);
}
