#include "sort.h"

/**
 * swap -swaps two intergers
 *
 * @a: first interger
 * @b: second interger
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sorts an array using selection sort
 * slgorithm
 *
 * @array: array of ints to sort
 * @size: The size of the array to sort
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_idx;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[i])
			{
				min_idx = j;
			}
		swap(&array[i], &array[min_idx]);
		print_array(array, size);
		}
	}
}
