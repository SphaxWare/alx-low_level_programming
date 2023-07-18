#include <stdio.h>
#include "main.h"
/**
 * print_sign - does what its name says
 *
 * @c:ascii number for alphabet
 *
 * Description:this function print sign
 *
 *Return: 1 0 or -1
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
