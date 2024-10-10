#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 * Return: pointer to the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int i = 0;

	if (idx == 0)
	{
		listint_t *new;

		new = (listint_t *)malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
