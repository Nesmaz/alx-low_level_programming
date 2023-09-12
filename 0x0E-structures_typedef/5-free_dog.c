#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free struct pointer
 * @d: the pointer to be freed
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
