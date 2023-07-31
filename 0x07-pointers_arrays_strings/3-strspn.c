#include "main.h"

/**
 * _strspn - Fills memory with a constant byte
 * @accept: Pointer to the memory area to be filled
 * @s: The constant byte to fill the memory with
 *
 *
 * Return: A pointer to the memory area `dest`
 */
unsigned int _strspn(char *s, char *accept);
{
	int i = 0;
	int j;
	while (*s)
	{
		for (j=0 ;accept[j];j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
		}
		s++;
	}
	return(i);
}
