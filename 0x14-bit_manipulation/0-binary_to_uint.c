#include "main.h"

/**
 * binary_to_int - check the code
 * @b:string
 * Return: converted.
 */
unsigned int binary_to_uint(const char *b)
{
	int loop;
	unsigned int converted = 0;

	if (!b)
		return (0);

	for (loop = 0; b[loop]; loop++)
	{
		if (b[loop] < '0' || b[loop] > '1')
			return (0);
		converted = 2 * converted + (b[loop] - 48);
	}

	return (converted);
}
