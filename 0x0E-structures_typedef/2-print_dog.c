#include "dog.h"
#include <stdio.h>
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	
	}




	(d -> name == NULL) ? printf("(nil)\n"): printf("Name: %s\n", d -> name);
	printf("Age: %f\n", d -> age);
	(d -> owner == NULL) ? printf("(nil)\n"):printf("%s\n", d -> owner);

}
