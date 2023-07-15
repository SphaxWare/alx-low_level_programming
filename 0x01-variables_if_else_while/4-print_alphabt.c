#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char ch;

        for (ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
        }

        putchar('\n');

        for (ch = 'A'; ch <= 'Z'; ch++)
        {
                putchar(ch);
        }

        putchar('\n');

        return (0);
}
