#include "sort.h"
/**
 *insertion_sort_list - sorts a doubly linked list using insertion sort
 *@list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *start = NULL, *temp, *hold;

	if (*list)
		start = (*list)->next;
	while (start)
	{
		temp = start;
		while (temp->prev && (temp->prev->n > temp->n))
		{
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			temp->next = temp->prev;
			hold = temp->prev->prev;
			if (hold)
				hold->next = temp;
			temp->prev->prev = temp;
			temp->prev = hold;
			if (!temp->prev)
				*list = temp;
			print_list(*list);
		}
		start = start->next;
	}
}
