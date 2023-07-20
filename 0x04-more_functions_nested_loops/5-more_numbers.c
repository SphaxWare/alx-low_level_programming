#include "main.h"

/**
 * more_numbers - check the code
 *
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + 48);
			}
			k = j % 10;
			_putchar(k + 48);
		}
		_putchar('\n');
	}
}
