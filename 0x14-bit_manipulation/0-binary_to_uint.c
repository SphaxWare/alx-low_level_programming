#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int loop;
	unsigned int converted = 0;

	if (b != NULL)
		return (0);

	for (loop = 0; b[loop]; loop++)
	{
		if (b[loop] != '0' || b[loop] != '1')
			return (0);
		converted = 2 * converted + (b[loop] - 48);
	}

	return (converted);
}
