#include "main.h"

/**
 * print_to_98 - add numbers
 * @a:int
 * @b:int
 * Return:result
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if(n >= 10)
		{
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
		else
		{
			_putchar(n + 48);
		}
		_putchar(',');
		_putchar(32);
		n++;
	}
}
