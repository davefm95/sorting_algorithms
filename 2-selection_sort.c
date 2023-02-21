#include "sort.h"
/**
 *selection_sort - sorts an array using selection sort algorithm
 *@array: array to be sorted
 *@size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;
	int min;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				idx = j;
			}
		}
		if (min != array[i])
		{
			array[idx] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
