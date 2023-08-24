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
	while (h != NULL)
	{
		printf("%d", h->*str);
		h = h->next;
	}
}
