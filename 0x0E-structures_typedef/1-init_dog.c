#include <stdlib.h>
#include "dog.h"

/**
* init_dog - a dog's basic info
* @name: First param
* @d: pointer
* @age: Second param
* @owner: Third param
*
* Description: Extra details
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
