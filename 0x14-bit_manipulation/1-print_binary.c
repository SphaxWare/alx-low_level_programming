#include "main.h"

/**
 * print_binary - check the code
 * @n:biinary numbah
 * Return: Always 0.
 *
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		n = n >> i;

		if (n & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
