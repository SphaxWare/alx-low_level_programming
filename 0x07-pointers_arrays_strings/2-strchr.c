#include "main.h"

/**
 * _strchr - Fills memory with a constant byte
 * @c: Pointer to the memory area to be filled
 * @s: The constant byte to fill the memory with
 *
 *
 * Return: A pointer to the memory area `dest`
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
