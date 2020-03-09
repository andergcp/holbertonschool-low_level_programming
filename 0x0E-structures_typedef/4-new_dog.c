#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code for Holberton School students.
 * @str: pointer
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int c = 0, s = 0;

	char *d;

	if (str == NULL)
		return (NULL);
	while (str[s] != '\0')
	{
		s++;
		c++;
	}
	c = 0;
	d = malloc(sizeof(char) * (s + 1));
	if (d == NULL)
		return (NULL);
	while (c < (s + 1))
	{
		d[c] = str[c];
		c++;
	}

	if (str == NULL)
		return (NULL);
	return (d);
}


/**
 * new_dog - creates a new dog
 * @name: Pointer to a string: new dogs name
 * @age: float dogs age
 * @owner: Pointer to a string: new owners name
 * Return: Pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int in = 0, io = 0;
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

	name_cpy = _strdup(name);
	owner_cpy = _strdup(owner);
	info_new->name = name_cpy;
	info_new->owner = owner_cpy;
	info_new->age = age;
	return (info_new);
}
