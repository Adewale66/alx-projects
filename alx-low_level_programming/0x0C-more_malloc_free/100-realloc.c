#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * @old_size: old size of memory block
 * @new_size: new size of memory block
 * @ptr: pointer to memory block
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_block;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	new_block = malloc(new_size);
	if (new_block == NULL)
		return (NULL);
	memcpy(new_block, ptr, old_size);
	free(ptr);
	return (new_block);

}
