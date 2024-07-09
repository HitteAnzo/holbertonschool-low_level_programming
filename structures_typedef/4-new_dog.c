#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dog.h"

/**
 * new_dog - the new doggy struct.bardela
 * @name: name of the doggy.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: ptr_dog (the new dog).
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *ptr_dog;
	int size_name = 0;
	int size_owner = 0;

	ptr_dog = malloc(sizeof(dog_t));

	if (ptr_dog == NULL)
		return (NULL);

	while (name[size_name] != '\0')
		size_name++;

	ptr_dog->name = malloc(sizeof(char) * (size_name + 1));

	if (ptr_dog->name == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}

	strcpy(ptr_dog->name, name);

	while (owner[size_owner] != '\0')
		size_owner++;

	ptr_dog->owner = malloc(sizeof(char) * (size_owner + 1));

	if (ptr_dog->owner == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}

	strcpy(ptr_dog->owner, owner);

	ptr_dog->age = age;

	return (ptr_dog);
}
