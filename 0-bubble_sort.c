#include "sort.h"

/**
 * bubble_sort - this function that sorts an array of integers in asc
 * order using the bubble sort algorithm.
 * @array: the Array to sort
 * @size: the size of the array to sort
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, exchange = 0, temp;

	if(size <= 1)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		exchange = 0;
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j + 1] = temp;
				exchange = 1;
				print_array(array, size);
			}
		}
		if (exchange == 0)
			break;
	}
}
