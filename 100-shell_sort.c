#include "sort.h"

/**
 * swap - function swaps positions of two elements in an array
 *
 * @array: pointer to array containing elements to swap
 * @idx1: index of first element
 * @idx2: index of second element
 * @size: size of array
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
 * shell_sort - this function sorts an array using shell_sort algorithm
 * @array: array
 * @size: size of the array
 * Return: NULL
 **/
void shell_sort(int *array, size_t size)
{
	int gap = 1, i, j;

	if (array == NULL)
		return;
	if (size < 2)
		return;
	while (gap < (int)size / 2)
		gap = gap * 3 + 1;

	for (gap = gap; gap >= 1; gap /= 2)
	{
		for (j = gap; j < (int)size; j++)
		{
			for (i = j - gap; i >= 0; i -= gap)
			{
				if (array[i + gap] > array[i])
					break;
				else
					swap(array, i + gap, i, size);
			}
		}
	}
}
