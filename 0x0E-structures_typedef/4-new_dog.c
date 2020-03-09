#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: Pointer to a string: new dogs name
 * @age: float dogs age
 * @owner: Pointer to a string: new owners name
 * Return: Pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int in = 0, io = 0, x;
	dog_t *info_new;
	char *name_cpy, *owner_cpy;

	if (name == NULL || owner == NULL)
		return (NULL);
	info_new = malloc(sizeof(dog_t));
	if (info_new == NULL)
		return (NULL);
	while (name[in])
		in++;
	in++;
	while (owner[io])
		io++;
	io++;
	info_new->name_cpy = malloc(sizeof(char) * in);
	if (info_new->name_cpy == NULL)
	{
		free(info_new->name_cpy);
		free(info_new);
		return (NULL);
	}
	info_new->owner_cpy = malloc(sizeof(char) * io);
	if (info_new->owner_cpy == NULL)
	{
		free(info_new->owner_cpy);
		free(info_new->name_cpy);
		free(info_new);
		return (NULL);
	}

	for (x = 0; x <= in; x++)
		info_new->name_cpy[x] = name[x];
	for (x = 0; x <= io; x++)
		info_new->owner_cpy[x] = owner[x];
	info_new->age = age;
	return (info_new);
}
