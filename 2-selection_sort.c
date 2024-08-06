#include "sort.h"

/**
 * selection_sort - sorts an array of int in ascending order
 * @array: array of int to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, low;
	int temp;

    if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		low = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				low = j;
		}
		if (low != i)
		{
			temp = array[i];
			array[i] = array[low];
			array[low] = temp;
			print_array(array, size);
		}
	}
}