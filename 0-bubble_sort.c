#include "sort.h"

/**
 * swap - Swaps two intergers in an array
 *
 * @a: first intrger
 * @b: second interger
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
* bubble_sort- sort intergers using bubblesort algo
*
* @array: pointer to array of intergers
* @size: the size of the array of intergers
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j + 1] < array[j])
			{
				swap(&array[j + 1], &array[j]);
				print_array(array, size);
			}
		}
	}
}
