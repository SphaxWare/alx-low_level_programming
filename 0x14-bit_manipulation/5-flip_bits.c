#include "main.h"

/**
 * flip_bits - check the code
 * @n:int
 * @m:int
 * Return: counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int j;
	unsigned long int flip = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		j = flip >> i;
		if (j & 1)
			counter++;
	}
	return (counter);
}
