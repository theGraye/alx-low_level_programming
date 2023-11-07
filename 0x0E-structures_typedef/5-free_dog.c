#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function free dogs
 * @d: pointer to dog_t
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
