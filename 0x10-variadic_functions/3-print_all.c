#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list var;
	char *str, *sep = "";
	int loop = 0;

	va_start(var,format);

	if (format)
	{
		while (format[loop])
		{
			switch (format[loop])
			{
				case 'c':
					printf("%s%c", sep, va_arg(var, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(var, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(var, double));
					break;
				case 's':
					str = va_arg(var, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					loop++;
					continue;
			}
			sep = ", ";
			loop++;
		}
	}
	printf("\n");
	va_end(var);
}
