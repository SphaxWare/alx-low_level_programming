#include "main.h"

/**
 * _strpbrk - Fills memory with a constant byte
 * @accept: Pointer to the memory area to be filled
 * @s: The constant byte to fill the memory with
 *
 *
 * Return: A pointer to the memory area `dest`
 */
unsigned int *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (*s)
	{
		for (j = 0 ; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
