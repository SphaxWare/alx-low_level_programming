#include "main.h"

/**
 * print_line - check the code
 * @n:int
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		if (i == 0)
		{
			_putchar('\n');
		}
		else
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
