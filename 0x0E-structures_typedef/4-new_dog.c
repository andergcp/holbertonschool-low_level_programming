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
	info_new->name = malloc(sizeof(char) * in);
	if (info_new->name == NULL)
	{
		free(info_new->name);
		free(info_new);
		return (NULL);
	}
	info_new->owner = malloc(sizeof(char) * io);
	if (info_new->owner == NULL)
	{
		free(info_new->owner);
		free(info_new->name);
		free(info_new);
		return (NULL);
	}

	for (x = 0; x <= in; x++)
		info_new->name[x] = name[x];
	info_new->age = age;
	for (x = 0; x <= io; x++)
		info_new->owner[x] = owner[x];
	return (info_new);
}
