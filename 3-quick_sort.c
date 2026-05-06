#include "sort.h"

/**
 * swap - Swaps two integers in an array
 *
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
static void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - Partitions a sub-array using Lomuto scheme
 *
 * @array: The full array (needed for print_array)
 * @size: Full size of the array
 * @lo: Left index of the partition
 * @hi: Right index of the partition (pivot)
 *
 * Return: Final index of the pivot
 */
static int lomuto_partition(int *array, size_t size, int lo, int hi)
{
	int pivot, i, j;

	pivot = array[hi];
	i = lo - 1;

	for (j = lo; j < hi; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (i + 1 != hi)
	{
		swap(&array[i + 1], &array[hi]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quicksort_recursive - Recursively sorts sub-arrays
 *
 * @array: The array to sort
 * @size: Full size of the array
 * @lo: Left bound of current partition
 * @hi: Right bound of current partition
 */
static void quicksort_recursive(int *array, size_t size, int lo, int hi)
{
	int pivot_idx;

	if (lo < hi)
	{
		pivot_idx = lomuto_partition(array, size, lo, hi);
		quicksort_recursive(array, size, lo, pivot_idx - 1);
		quicksort_recursive(array, size, pivot_idx + 1, hi);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick sort algorithm (Lomuto partition)
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quicksort_recursive(array, size, 0, (int)size - 1);
}
