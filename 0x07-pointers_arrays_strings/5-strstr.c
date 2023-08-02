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
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;

		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p ==  '\0')
			return (haystack);
	}
	return (0);
}
