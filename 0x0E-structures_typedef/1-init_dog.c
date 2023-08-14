#include "dog.h"

/**
  * init_dog - function that initialize a variable of type struct dog
  *
  * @d: input dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  *
  * Return: results
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
