#include "lists.h"

/**
 * reverse_linked_list_custom - reverses a linked list
 * @start: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_linked_list_custom(listint_t **start)
{
	listint_t *previous = NULL;
	listint_t *next_node = NULL;

	while (*start)
	{
		next_node = (*start)->next;
		(*start)->next = previous;
		previous = *start;
		*start = next_node;
	}

	*start = previous;

	return (*start);
}

size_t count_nodes_in_looped_list(const listint_t *head);
size_t print_listint_safely(const listint_t *head);

/**
 * count_nodes_in_looped_list - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @start: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t count_nodes_in_looped_list(const listint_t *start)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (start == NULL || start->next == NULL)
		return (0);

	tortoise = start->next;
	hare = (start->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = start;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safely - Prints a listint_t list safely.
 * @start: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safely(const listint_t *start)
{
	size_t nodes, index = 0;

	nodes = count_nodes_in_looped_list(start);

	if (nodes == 0)
	{
		for (; start != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)start, start->n);
			start = start->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)start, start->n);
			start = start->next;
		}

		printf("-> [%p] %d\n", (void *)start, start->n);
	}

	return (nodes);
}
