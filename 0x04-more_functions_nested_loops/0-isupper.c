#include "main.h"

/**
 * _isupper - check if UPPER.
 *
 * @c:variable
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c <= 65 && c >= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
