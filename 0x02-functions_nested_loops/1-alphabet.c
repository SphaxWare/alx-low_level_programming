#include <stdio.h>
/**
 * print_alphabet - does what its name says
 *
 * Description:this function print all the alphabets
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
}
