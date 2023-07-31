#include "main.h"

/**
 * _memcpy - Fills memory with a constant byte
 * @src: Pointer to the memory area to be filled
 * @dest: The constant byte to fill the memory with
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the memory area `dest`
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
