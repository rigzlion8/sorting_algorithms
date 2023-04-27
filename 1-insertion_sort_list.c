#include "sort.h"

/**
 * swap_two - this function swaps two doubly linked list elements
 * @a: left element
 * @b: right element
 * @list: all doubly linked list
 * Return: pointer to a element (actual)
 */
listint_t *swap_list(listint_t *x, listint_t *y, listint_t **list)
{
	if (x->prev)
		(x->prev)->next = y;
	else
		*list = y, y->prev = NULL;
	if ((y->next))
		(y->next)->prev = x;
	y->prev = x->prev;
	x->prev = y;
	x->next = y->next;
	y->next = x;
	return (x);
}

/**
 * insertion_sort_list - this function sorts a doubly linked list of integers
 *			in ascending order using the Insertion sort algorithm
 *
 * @list: doubly linked-list to sort
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *prev;

	if (!list || !(*list) || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		temp = current;
		prev = current->prev;
		while ((temp->prev) && (prev->n > temp->n))
		{
			current = swap_list(prev, temp, list);
			print_list(*list);
			if (!temp->prev)
				break;
			prev = temp->prev;
		}
		current = current->next;
	}
}
