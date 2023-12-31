#ifndef __SORT_H__
#define __SORT_H__

#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*methods for printing array and linked list*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*bubble sort implememntation prototype*/
void bubble_sort(int *array, size_t size);

/*insertion sort implementation prototype*/
void insertion_sort_list(listint_t **list);

/*selection sort algo*/
void selection_sort(int *array, size_t size);

/*quick*/
void quick_sort(int *array, size_t size);


#endif
