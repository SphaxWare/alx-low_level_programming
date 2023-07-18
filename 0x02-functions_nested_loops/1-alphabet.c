#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * description print_alphabet does what its name says
 *
 * Return:Always 0 (Success)
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
