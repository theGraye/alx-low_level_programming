#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function initializes a variable of type struct dog
 * @d: pointer to struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return:0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
