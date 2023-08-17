#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, number;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(ap, int);
		if (separator == NULL)
		{
			printf("%d",number);
		}
		else
		{
			if (i == n - 1)
				printf("%d",number);
			else
				printf("%d%s", number, separator);
		}
	}
	printf("\n");
}
