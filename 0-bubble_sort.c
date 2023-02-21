#include "sort.h"
/**
 *bubble_sort - sorts an array using bubble sort algorithm
 *@array: array to be sorted
 *@size: soze of array
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j = 1;

	while (j < size)
	{
		for (i = 0; i + 1 != size; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		j++;
	}
}
