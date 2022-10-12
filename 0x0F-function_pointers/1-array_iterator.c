/*
 * File: 1-array_iterator.c
 * Auth: Brennan D Baraban
 */

#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a 
 * parameter on each element of an array.
 * @array: array to execute func on
 * @size: size of the array
 * @action: pointer to the function we need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++
	}
}
