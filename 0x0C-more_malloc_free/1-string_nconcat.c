#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *string_nconcat - allocates memory using malloc
 * @s1: number of bytes to allocate
 * @s2: chari
 * @n : num
 * Return: a pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t l1, l2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);
	if (n >= l2)
		p = malloc((sizeof(char) * l1) + (sizeof(char) * l2) + 1);
	else
		p = malloc((sizeof(char) * l1) + n + 1);
	if (p == NULL)
		return (NULL);
	return (p);
}
