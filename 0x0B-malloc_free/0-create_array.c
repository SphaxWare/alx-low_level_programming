#include <stdlib.h>
/**
 * create_array - create an array
 * @size:size
 * @c:char
 *
 * Return:Null or pointer
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *array = malloc(sizeof(char) * size);
		array[0] = c;
		return (array);
	}
}
