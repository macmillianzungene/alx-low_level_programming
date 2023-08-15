#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - function that frees dogs.
  *
  * @d: input dog
  *
  * Return: results
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
