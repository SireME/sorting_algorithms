#include "sort.h"

/**
 * selection_sort - sort liost using selection sort
 * @array: array to sort
 * @size: size of list
 *
 * Return:
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j = 0, idx;
	int smallest, temp, sorted;

	if (array == NULL)
		return;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		smallest = array[i];
		idx = i;
		sorted = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] <= smallest)
			{
				smallest = array[j];
				idx = j;
				sorted = 1;
			}
		}
		if (sorted == 1)
		{
			temp = array[i];
			array[i] = smallest;
			array[idx] = temp;
			print_array(array, size);
		}
	}
}
