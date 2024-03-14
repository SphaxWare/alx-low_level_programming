#include "search_algos.h"

/**
 * exponential_search - in the name
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, newsize = 0;
	int ret;

	if (!array || !size)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i <<= 1;
	}
	newsize = (i >= size ? size : i + 1) - (i >> 1);
	i >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, i << 1 >= size ? size - 1 : i << 1);
	ret = binary_search(array + i, newsize, value);
	return (ret == -1 ? ret : ret + (int)i);
}
/**
 * printer - print an array
 * @array: the array to print
 * @s: the start index
 * @e: the end index
 */
void printer(int *array, int s, int e)
{
	int i;

	for (i = s; i <= e; i++)
	{
		printf("%d", array[i]);
		if (i < e)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - search for an element in an array
 * @array: the array we want to search in
 * @size: size of the array
 * @value: the target value
 * Return: the index of the value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int s = 0, e = size - 1, m;

	if (!array || size == 0)
		return (-1);

	while (s <= e)
	{
		printf("Searching in array: ");
		printer(array, s, e);
		m = s + (e - s) / 2;

		if (array[m] > value)
			e = m - 1;
		else if (array[m] < value)
			s = m + 1;
		else
			return (m);
	}

	return (-1);
}
