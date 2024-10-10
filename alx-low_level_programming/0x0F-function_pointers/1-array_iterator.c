#include "function_pointers.h"

/**
 * array_iterator - executes a function given an array as a parameter
 * @array: array pointer
 * @size: size of array
 * @action: callback funtion
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);

}
