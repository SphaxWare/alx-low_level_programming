#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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

