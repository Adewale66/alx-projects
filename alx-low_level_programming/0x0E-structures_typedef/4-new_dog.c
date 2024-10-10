#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 * Return: dog pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1 = strlen(name), len2 = strlen(owner);

	d = (dog_t *) malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	d->name = (char *) malloc(sizeof(char) * (len1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = (char *) malloc(sizeof(char) * (len2 + 1));

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
