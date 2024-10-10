#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list, *prev = list;

	if (!list)
		return (NULL);

	while (current)
	{
		prev = current;
		if (current->express)
			printf("Value checked at index [%lu] = [%d]\n",
				   current->express->index, current->express->n);
		if (!current->express || current->express->n >= value)
		{
			if (!current->express && current->n < value)
			{
				prev = current;
				while (current->next)
					current = current->next;
			}
			printf("Value found between indexes [%lu] and [%lu]\n",
				   prev->index, current->index);
			while (prev)
			{
				printf("Value checked at index [%lu] = [%d]\n",
					   prev->index, prev->n);
				if (prev->n == value)
					return (prev);
				if (prev->n > value)
					return (NULL);
				prev = prev->next;
			}
		}
		current = current->express;
	}
	return (NULL);
}
