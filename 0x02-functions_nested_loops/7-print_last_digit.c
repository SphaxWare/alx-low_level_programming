#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - does what its name says
 *
 * @c:ascii number for alphabet
 *
 * Description:this function print sign
 *
 *Return: 1 0 or -1
 */
int print_last_digit(int i)
{
	i=i%10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
