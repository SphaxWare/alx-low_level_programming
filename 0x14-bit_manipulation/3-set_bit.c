#include "main.h"
/**
 * set_bit - check the code
 * @n:long int
 * @index:index
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
