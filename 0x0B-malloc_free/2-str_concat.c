#include <stdlib.h>
#include <string.h>
/**
 *_strdup - create an array
 *
 * @str:char
 *
 * Return:Null or pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int r, i;
	size_t l1 = strlen(s1);
	size_t l2 = strlen(s2);

	p = malloc(l1 + l2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	r = 0;
	while (s1[r] != '\0')
	{
		p[r] = s1[r];
		r++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		p[r] = s2[i];
		i++, r++;
	}
	p[i] = '\0';

	return (p);
}
