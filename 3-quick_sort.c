#include "sort.h"

/**
 * partition - Partitions a using a pivot
 * 
 * @array: The array of ints to be sorted
 * @low: the first/lowest index
 * @high: the last/highestindex
 * Return - returns the index of the pivot
*/
int partition(int *array, int low, int high)
{
    int j, i;
    i = low - 1;
    for(j = low; j<= high - 1; j++)
    {
        if(array[j] < array[high])
        {
            i++;
            swap(&array[j], &array[i]);
        }
    }
    swap(&array[i + 1], array[high]);
    print_array(&array, high + 1);
    return(i + 1);
}

/**
 * recursive_quicksort - Recursively partitions the array
 *                      using the last element as a pivot 
 *                      index
 * @low: lowest/first index of the array
 * @high: Highest/last index of the array
*/
void recursive_quicksort(int *array, int low, int high)
{
    int pIdx = partition(&array, low, high);
    recursive_quicksort(&array,low, pIdx - 1);
    recursive_quicksort(&array, pIdx + 1, high);

}
/**
 * Quick_sort - Sorts an array of ints via
 *              quick sort algorithm
 * 
 * @array: array of ints to be sorted
 * @size: the size of the array we are sorting.
*/
void quick_sort(int *array, size_t size)
{
    if(array == NULL || size < 2)
        return;
    recursive_quicksort(&array, 0, size - 1);
}
