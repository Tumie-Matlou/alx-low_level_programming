#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: a pointer to struct dog
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	(d->name == NULL) ? printf("NAME: (nil)\n")
		: printf("NAME: %s\n", d->name);
	
	printf("AGE: %f\n", d->age);
	
	(d->owner == NULL) ? printf("OWNER: (nil)\n")
		: printf("OWNER: %s\n", d->owner);
}
