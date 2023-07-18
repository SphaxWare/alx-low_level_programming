#include <stdio.h>
/**
 * _isalpha - does what its name says
 *
 * @c:ascii number for alphabet
 *
 * Description:this function print all the alphabets
 *
 *Return: 1 if lowercase and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
