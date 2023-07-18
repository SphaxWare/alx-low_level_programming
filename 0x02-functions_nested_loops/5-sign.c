#include <stdio.h>
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
	if (c >= 0)
	{
		return (1);
		putchar('+');
	}
	else if(c <= 0)
	{
		return (-1);
		putchar('-');
	}
	else
	{
		return (0);
		putchar('0');
	}
}
