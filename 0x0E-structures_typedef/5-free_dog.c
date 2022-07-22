#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * free_dog - initialises a struct dog
 * @d: pointer to a typedef (dog_t) of the struct dog
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d->owner)
		free(d->owner);
	if (d->name)
		free(d->name);
	if (d)
		free(d);
}
