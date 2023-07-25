#include "sort.h"

/**
 * insertion_sort_list - implement sorting using insertion sort algorithm
 * @list: list to sort
 *
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *linkn, *nlist;

	if (list == NULL)
		return;

	nlist = *list;
	while (nlist != NULL)
	{
		current = nlist;

		while (current->prev != NULL && current->n < current->prev->n)
		{
			linkn = current;
			linkn->prev->next = linkn->next; /* Swap elements */
			if (linkn->next != NULL)
				linkn->next->prev = linkn->prev;
			linkn->next = linkn->prev;
			linkn->prev = linkn->prev->prev;
			linkn->next->prev = linkn;

			if (linkn->prev == NULL)
				*list = linkn;
			else
				linkn->prev->next = linkn;
			/*print list whenever swap occures*/
			print_list(*list);
		}
		nlist = nlist->next;
	}
}

