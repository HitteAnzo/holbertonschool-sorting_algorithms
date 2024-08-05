#include "sort.h"

/**
* bubble_sort - sort an array of integers.
* @array: pointer to an array.
* @size: array's size.
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int tmp = 0;
	int swpcnt = -1;

	while (swpcnt != 0)
	{
		swpcnt = 0;
		for (i = 0; i < (size - 1); ++i)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				++swpcnt;
				print_array(array, size);
			}
		}
	}
}
