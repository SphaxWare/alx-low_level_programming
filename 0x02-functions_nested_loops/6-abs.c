#include <stdio.h>
#include "main.h"
/**
 * _abs - does what its name says
 *
 * @c:ascii number for alphabet
 *
 * Description:this function print sign
 *
 *Return: 1 0 or -1
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
