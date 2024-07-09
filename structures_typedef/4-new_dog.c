#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dog.h"

/**
 * new_dog - the new doggy struct.
 * @name: name of the doggy.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: ptr_dog (the new dog).
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int size_name, size_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	size_name = strlen(name);
	size_owner = strlen(owner);

	dog->name = malloc(size_name + 1);
	dog->owner = malloc(size_owner + 1);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
