#include "main.h"

/**
 * get_bit - check the code.
 * @n:long int.
 * @index:int.
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
