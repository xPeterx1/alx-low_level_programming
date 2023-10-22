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
	char *hold1, *hold2;
	dog_t *pointer = malloc(sizeof(dog_t));

	if (pointer != NULL)
{
	for (numofw = 0, word = 0; *(name + word) != '\0'; word++, numofw++)
	;
	hold1 = malloc(sizeof(char) * numofw + 1);
		if (hold1 == NULL)
		{
			free(pointer);
			return (NULL);
		}
	for (word = 0; word <= (numofw + 1); word++)
	{
		*(hold1 + word) = *(name + word);

	}
	for (numofw = 0, word = 0; *(owner + word) != '\0'; word++, numofw++)
	;
		hold2 = malloc(sizeof(char) * numofw + 1);
		if (hold2 == NULL)
		{
			free(pointer);
			free(hold2);
			return (NULL);
		}

	for (word = 0; word <= (numofw + 1); word++)
	{
		*(hold2 + word) = *(owner + word);

	}
	pointer->age = age;
	pointer->name = hold1;
	pointer->owner = hold2;
	return (pointer);
}
	return (NULL);

}

