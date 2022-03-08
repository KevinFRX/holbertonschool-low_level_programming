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
	while (name[a])
		a++;
	while (owner[b])
		b++;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(d->name) * a);
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(d->owner) * b);
	if (d == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i < a; i++)
		d->name[i] = name[i];
	for (i = 0; i < b; i++)
		d->owner[i] = owner[i];
	d->age = age;
	return (d);
}
