#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: d or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, i;
	dog_t *d;

	a = 0;
	b = 0;
	while (name[a++])
		;
	while (owner[b++])
		;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(d->name) * a);
	if (d == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		d->name[i] = name[i];

	d->age = age;

	d->owner = malloc(sizeof(d->owner) * b);
	if (d == NULL)
		return (NULL);

	for (i = 0; i < b; i++)
		d->owner[i] = owner[i];

	return (d);
}
