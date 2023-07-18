#include <stdio.h>
/**
 * print_alphabet_x10 - does what its name says
 *
 * Description:this function print all the alphabets
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for(i=1; i==10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
         	{
                	putchar(ch);
         	}

         	putchar('\n');
	}

}
