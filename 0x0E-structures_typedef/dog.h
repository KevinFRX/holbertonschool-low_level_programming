#ifndef DOGXD
#define DOGXD

/**
 * struct dog - dog's information
 * @name: name
 * @age: age
 * @owner: owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef stryct dog dog_t;

#endif
