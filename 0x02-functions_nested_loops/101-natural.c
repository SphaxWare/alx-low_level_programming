#include<stdio.h>

/**
 * main - prints the n times table, starting with 0
 * return:0
 */
int main()
{
	int i, sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	i++;
	}
	printf("%d",sum);
	return (0);	
}
