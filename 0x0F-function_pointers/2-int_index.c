#include "function_pointers.h"

/**
 * int_index - searches for an integer in the array
 * @array: array of integers
 * @size: size of the array
 * @int: Funtcion to pass the elements of array
 * Return: The index of the first match, otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (i < size)
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		else
			i++;
	return(-1);
}
