#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers using the
 * Jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return: a pointer to the first node where value is located or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size), i = 0, j = 0;
	listint_t *c = list, *p = NULL;

	if (!list)
		return (NULL);

	while (c->n < value && c->next)
	{
		p = c;
		for (i = 0; c->next && i < jump; i++)
			c = c->next;
		printf("Value checked at index [%lu] = [%d]\n", c->index, c->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", p->index, c->index);
	for (j = p->index; j <= c->index && p; j++, p = p->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", j, p->n);
		if (p->n == value)
			return (p);
	}
	return (NULL);
}
