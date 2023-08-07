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
	char *array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned int i;
		for (i = 0; i < size; i++)
		{
			array[0] = c;
		}
		return (array);
	}
}
