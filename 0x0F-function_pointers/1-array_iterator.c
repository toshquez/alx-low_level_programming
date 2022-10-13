#include "function_pointers.h"

/**
 * array_iterator - execute a function
 * @array: array to execute
 * @size: size of the array
 * @action: pointer to the function we need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
