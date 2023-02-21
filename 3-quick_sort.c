#include "sort.h"
/**
 *quicksort - uses lumotu partution to sort recursively
 *@arr: array
 *@low: leftmost index
 *@high: rightmost index
 *@size: array size
 */
void quicksort(int *arr, int low, int high, size_t size)
{
	int p;

	if (low >= high || low < 0)
		return;
	p = lomuto(arr, low, high);
	print_array(arr, size);
	quicksort(arr, low, p - 1, size);
	quicksort(arr, p + 1, high, size);
}
/**
 *lomuto - partitions an array using lomuto partition
 *@arr: array
 *@lo: leftmost index
 *@hi: rightmost idx
 *Return: pivot index
 */
int lomuto(int *arr, int lo, int hi)
{
	int pivot, i, j, temp;

	pivot = arr[hi];
	i = lo - 1;
	for (j = lo; j < hi; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
	i++;
	temp = arr[hi];
	arr[hi] = arr[i];
	arr[i] = temp;
	return (i);
}
/**
 *quick_sort - sorts using quicksort lomuto partition
 *@array: array to be slrted
 *@size: aize of array
 */
void quick_sort(int *array, size_t size)
{
	int lo = 0, hi;

	if (!array || size == 0)
		return;
	hi = (int) (size - 1);
	quicksort(array, lo, hi, size);
}
