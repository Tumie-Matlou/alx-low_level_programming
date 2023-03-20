#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initializes a variabe of type struct dog
 * @d: a pointer to the struct function
 * @name: pointer to string that holds the name of the dog
 * @age: the age of the dog
 * @owner: pointer to string that holds name of owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
