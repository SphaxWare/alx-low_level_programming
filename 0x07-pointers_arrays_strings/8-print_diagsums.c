#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: int
 * @size:size
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i;

	int sum1 = 0;

	int sum2 = 0;

	for (i = 0; i <= size - 1; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
