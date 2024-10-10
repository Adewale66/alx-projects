#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *prev = NULL;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev->str);
		free(prev);
	}
}
