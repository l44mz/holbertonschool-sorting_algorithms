#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: pointer to list head
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current;

		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			/* swap with previous node */
			if (temp->next != NULL)
				temp->next->prev = temp->prev;

			temp->prev->next = temp->next;
			temp->next = temp->prev;

			if (temp->prev->prev != NULL)
				temp->prev->prev->next = temp;
			temp->prev = temp->prev->prev;

			if (temp->prev == NULL)
				*list = temp;
			else
				temp->prev->next = temp;

			temp->next->prev = temp;

			print_list(*list);
		}

		current = current->next;
	}
}
