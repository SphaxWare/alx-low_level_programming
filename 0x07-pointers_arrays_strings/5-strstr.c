#include "main.h"
/**
 * _strstr - Fills memory with a constant byte
 * @haystack: Pointer to the memory area to be filled
 * @needle: The constant byte to fill the memory with
 *
 *
 * Return: A pointer to the memory area `dest`
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	while (*haystack)
	{
		for (j = 0 ; needle[j]; j++)
		{
			if (*haystack == needle[j])
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (0);
}
