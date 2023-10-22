#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new data type
 * @name: dog name
 * @age : dog age
 * @owner : owner of dog
 * Description : new structure
 */


typedef struct dog

{
	char *name;
	float age;
	char *owner;



}
dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
