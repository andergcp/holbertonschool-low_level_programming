#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees doc pointers
 * @d: pointer to Dog structure
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).owner);
		free((*d).name);
		free(d);
	}
}
