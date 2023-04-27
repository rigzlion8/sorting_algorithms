#include "sort.h"

/**
 * swap - this function swaps positions of two elements in an array
 *
 * @array: pointer to array containing elements to swap
 * @idx1: index of first element
 * @idx2: index of second element
 *
 */
void swap(int *array, int idx1, int idx2, size_t size)
{
	int temp;

	temp = array[idx1];
	array[idx1] = array[idx2];
	array[idx2] = temp;
	print_array(array, size);
}

/**
 * selection_sort - this function sorts an array of integers in
 *                  ascending order using the Selection sort algorithm.
 * @array: pointer of array to sort
 * @size: size of array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (array == NULL)
		return;
	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			swap(array, i, min, size);
		}
	}
}
