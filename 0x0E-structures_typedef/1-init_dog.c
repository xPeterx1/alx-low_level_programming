#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function to derefrence a variable
 * @d : pointer to a structure
 * @name : pointer to a char
 * @age : number
 * @owner: owner
 * Return - 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->age = age;
	d->name = name;
	d->owner = owner;
	}





}
