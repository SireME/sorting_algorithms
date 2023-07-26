#include "sort.h"

/**
 * quick_sort - implementation of quicksort algorithm
 * @array: array to sort
 * @size: size of array to sort
 *
 * Return: nothing
 */

int breakdown(int arr[], int low, int high) {
	int temp, pivot = arr[high];  /* pivot for algo*/
	int i = low - 1, j;       /*lower bound idx*/

	for (j = low; j <= high - 1; j++)
	{
		/*Instance when current element is <= pivot*/
		if (arr[j] <= pivot)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	/*swap arr[i + 1] and arr[high] (or pivot)*/
	temp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = temp;
	return (i + 1);
}

void quick_sort_i(int *arr, int low, int high)
{
	int bd;

	if (low < high)
	{
		bd = breakdown(arr, low, high);
		quick_sort_i(arr, low, bd - 1);
		quick_sort_i(arr, bd + 1, high);
		print_array(arr, high);
	}
}

void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	/* sort wrapper*/
	quick_sort_i(array, 0, size - 1);
}
