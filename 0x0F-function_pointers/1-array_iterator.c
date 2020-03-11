#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes the function given as a parameter
 * on each element of an array.
 * @array: Integer array to print pass to functions
 * @size: size of array
 * @action: function to execute
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
