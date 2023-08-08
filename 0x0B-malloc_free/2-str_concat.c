#include <stdlib.h>
#include <string.h>
/**
 *_str_concat - create an array
 *
 * @s1:char
 * @s2:char
 *
 * Return:Null or pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int r, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	p = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (p == NULL)
		return (NULL);
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
	p[r] = '\0';

	return (p);
}
