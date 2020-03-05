#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to reallocate
 * @old_size: integer old size allocated
 * @new_size: integer new size to allocate
 * Return: NULL when fails, str when success
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		return(ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
