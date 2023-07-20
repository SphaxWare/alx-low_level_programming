#include "main.h"

/**
 * print_line - check the code
 * @n:int
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i != 0)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
