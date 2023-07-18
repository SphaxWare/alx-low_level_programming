#include <stdio.h>
/**
 * _islower - does what its name says
 *
 * @c:ascii number for alphabet
 *
 * Description:this function print all the alphabets
 *
 *Return: 1 if lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
