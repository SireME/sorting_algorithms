#include "sort.h"

/**
 * bubble_sort - implementation of the bubble sort algorithm
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int swap_occured, temp;

	if (array == NULL || size < 2)
		return;

	while (1)
	{
		swap_occured = 0; /*flag to determine when list is sorted*/
		for (i = 0; i < size - 1; i++)
		{
			if (array[i + 1] < array[i]) /*main swapping logic*/
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap_occured = 1;

				/*print array when ever a swap occures: condition*/
				print_array(array, size);
			}
		}
		if (swap_occured == 0) /* break out of loop if sorted*/
			break;
	}
}
