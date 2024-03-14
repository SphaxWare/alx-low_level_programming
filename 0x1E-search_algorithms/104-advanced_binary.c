#include "search_algos.h"

/**
 * advanced_binary_helper - performs advanced binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int *advanced_binary_helper(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!size || !array)
		return (NULL);
	for (printf("Searching in array: "); i < size; i++)
		printf("%d%s", array[i], i + 1 == size ? "\n" : ", ");

	i = (size - 1) / 2;
	if (array[i] == value)
	{
		if (i)
			return (advanced_binary_helper(array, i + 1, value));
		return (array + i);
	}
	else if (array[i] > value)
		return (advanced_binary_helper(array, i + 1, value));
	else
		return (advanced_binary_helper(array + i + 1, size - i - 1, value));
}

/**
 * advanced_binary - performs advanced binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int *a = advanced_binary_helper(array, size, value);

	if (!a)
		return (-1);
	else
		return (a - array);
}
