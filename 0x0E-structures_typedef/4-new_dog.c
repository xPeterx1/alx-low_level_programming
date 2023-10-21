#include "dog.h"
#include <stdio.h>

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t newDog;
	dog_t *pointer = &newDog;
	if (pointer != NULL)
	{
	newDog.name = name;
	newDog.age = age;
	newDog.owner = owner;
	char *namesaver = name;
	char *ownersaver = owner;
	return (pointer);
	}
	return (NULL);








}

