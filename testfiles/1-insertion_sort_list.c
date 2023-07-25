#include "sort.h"

/**
 * insertion_sort_list - implement sorting using insertion sort algo
 * @list: list to sort
 *
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *linkn, *nlist;

	if (*list == NULL || (*list)->next == NULL)
		return;
	nlist = (*list)->next;
	while (nlist != NULL)
	{
		current = nlist;

		if (current->n > current->prev->n) /*scenario in which n is ok*/
		{
			nlist = nlist->next;
			continue;
		}
		else
		{
			linkn = current;
			linkn->prev->next = linkn->next; /*pop out node and link*/
			/*traverse to the rigt position*/
			while (current->prev->n > current->n)
				current = current->prev;

			/*insert node in front of current position*/
			if (current->prev != NULL)
			{
				current->prev->next = linkn;
				linkn->prev = current->prev;
				current->prev = linkn;
				linkn->next = current;
			}
			else
                        {
                                current->prev = linkn;
                                linkn->next = current;
                                linkn->prev = NULL;
                                *list = linkn;
                        }
			/*print_list(f_list); print list when a swap occures*/
		}
		nlist = nlist->next;
	}
}
