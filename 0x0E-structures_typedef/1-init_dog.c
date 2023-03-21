#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - a function that asigns value for a dog struct
 *@d: a struct datatype prametr
 *@name: dog's name parametr
 *@age: the age of a dog
 *@owner: the owner of the dog parametr
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
