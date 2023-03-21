#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * init_dog - initialize a variable of type struct dog
  * @d: pointer to struct dog
  * @name: pointer to dog name
  * @owner: pointer to dog owner
  * @age: age of dog
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
		d->name = name;
		d->owner = owner;
		d->age = age;
}
