#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 * Bubble sort algorithm.
 *
 * @array: The given array to sort.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, len;
	bool bubbly;

	len = size;
	bubbly = false;
	if (array == NULL || size < 2)
	{
		return;
	}
	while (!bubbly)
	{
		bubbly = true;
		i = 0;
		while (i < len - 1)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				bubbly = false;
			}
			i++;
		}
		len--;
	}
}

