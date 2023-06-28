#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @a: The first int to swap.
 * @b: The second int to swap.
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - Sort an array of ints in ascending
 *	order using the shell sort algo.
 * @array: array of integers.
 * @size: size of the array.
 *
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
	return;

	for (gap = 1; gap < (size / 3);)
	gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
	for (i = gap; i < size; i++)
	{
	j = i;
	while (j >= gap && array[j - gap] > array[j])
	{
	swap(array + j, array + (j - gap));
	j -= gap;
	}
	}
	print_array(array, size);
	}
}
