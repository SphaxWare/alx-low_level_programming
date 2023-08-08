#include <stdlib.h>
/**
 *_strdup - create an array
 *
 * @str:char
 *
 * Return:Null or pointer
 */
char *_strdup(char *str)
{
	char *pointer;
	int i, r;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	pointer = malloc(sizeof(char) * (i + 1));

	if (pointer == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
	{
		pointer[r] = str[r];
	}

	return (pointer);
}
