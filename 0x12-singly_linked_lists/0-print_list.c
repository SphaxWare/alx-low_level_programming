#include "lists.h"
#include <stdio.h>

/**
 * print_list - print
 *
 * @h: pointer
 *
 * Return: number oof nooodes.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
