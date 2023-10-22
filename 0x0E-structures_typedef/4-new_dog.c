#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - Function that creates a new dog.
 * @name: type pointer char name.
 * @age: type pointer float age
 * @owner: type pointer char owner
 * Return: 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	int numofw, word;
	dog_t *pointer = malloc(sizeof(dog_t));

	if (pointer != NULL)
{
	for (numofw = 0, word = 0; *(name + word) != '\0'; word++, numofw++)
	;
	pointer->name = malloc(sizeof(char) * numofw + 1);
		if (pointer->name == NULL)
		{
			free(pointer);
			return (NULL);
		}
	for (word = 0; word <= (numofw + 1); word++)
	{
		*(pointer->name + word) = *(name + word);

	}
	for (numofw = 0, word = 0; *(owner + word) != '\0'; word++, numofw++)
	;
	pointer->owner = malloc(sizeof(char) * numofw + 1);
		if (pointer->owner == NULL)
		{
			free(pointer);
			return (NULL);
		}

	for (word = 0; word <= (numofw + 1); word++)
	{
		*(pointer->owner + word) = *(owner + word);

	}
	pointer->age = age;
	return (pointer);
}
	return (NULL);

}
