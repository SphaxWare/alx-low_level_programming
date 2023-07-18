#include <stdio.h>
/**
 * _islower - does what its name says
 *
 * Description:this function print all the alphabets
 */
int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
