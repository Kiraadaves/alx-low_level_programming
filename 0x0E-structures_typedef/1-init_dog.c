#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a structure
 * @d: pointer to the structure
 * @name: member of the structure
 * @age: member of the structure
 * @owner: member of the structure
 *
 * Description: structure for dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age =  age;
		d->owner = owner;
	}
}
