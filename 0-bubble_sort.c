#include "sort.h"

/**
 *  swap - swap the position of 2 elements in an array
 *
 *  @array: pointer to array containing elements to swap
 *  @i1: index of 1st element
 *  @i2: index of 2nd element
 *  @size: size of array
 */

void swap(int *array, int i1, int i2, size_t size)
{
	int temp;

	temp = array[i1];
	array[i1] = array[i2];
	array[i2] = temp;
	print_array(array, size);
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the bubble sort algorithim
 * @array: pointer to array to sort
 * @size: size of the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array, j, j + 1, size);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}

