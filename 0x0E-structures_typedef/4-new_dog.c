#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 * Return: pointer to a new dog of type dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen, i;
	dog_t *doggo;

	doggo = (dog_t *)malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	nameLen = ownerLen = 0;
	while (name[nameLen++])
		;
	while (owner[ownerLen++])
		;
	doggo->name = malloc(nameLen * sizeof(doggo->name));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	for (i = 0; i <= nameLen; i++)
		doggo->name[i] = name[i];
	doggo->age = age;
	doggo->owner = malloc(ownerLen * sizeof(doggo->owner));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	for (i = 0; i <= ownerLen; i++)
		doggo->owner[i] = owner[i];
	return (doggo);
}
