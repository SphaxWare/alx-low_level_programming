#include "lists.h"
/**
 * sum_dlistint - check the code
 * @head: djqf
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while(head)
	{
		sum += head->n;
	}
	return (sum);
}
