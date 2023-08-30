#include "lists.h"

/**
 * reverse_linked_list_custom - reverses a linked list
 * @start: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_linked_list_custom(listint_t **start)
{
	listint_t *pointer1, *pointer2;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	pointer1 = head->next;
	pointer2 = (head->next)->next;

	while (pointer2)
	{
		if (pointer1 == pointer2)
		{
			pointer1 = head;
			while (pointer1 != pointer2)
			{
				count++;
				pointer1 = pointer1->next;
				pointer2 = pointer2->next;
			}

			pointer1 = pointer1->next;
			while (pointer1 != pointer2)
			{
				count++;
				pointer1 = pointer1->next;
			}

			return (count);
		}

		pointer1 = pointer1->next;
		pointer2 = (pointer2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe_updated - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe_updated(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

