#include "lists.h"

/**
 * check_cycle - check if linked list is cycle
 * @list: head adrress for linked list
 *
 * Return: Return 1 if there is cycle and 0 if no cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *cyc = list;

	while (cyc)
	{
		cyc = cyc->next;
		if (cyc == list)
			return (1);
	}
	return (0);
}
