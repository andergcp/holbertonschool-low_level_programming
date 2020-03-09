#include "holberton.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d : Pointer to the structure
 * @name : Pointer to a string - dogs name
 * @age : Integer - dogs age
 * @owner : Pointer to a string - dogs owner name
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

