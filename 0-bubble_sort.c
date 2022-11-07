#include "sort.h"
/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, k, temp, sorted;

	for (k = 1; k < size - 1; k++)
	{
		sorted = 0;
		for (i = 0; i < size - k - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				sorted = 1;
			}
			print_array(array, size);
			if (sorted == 0)
				return;
		}
	}
}
