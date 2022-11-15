#include "dog.h"

/**
* init_dog - function that initializes a var: dog .
*@d: a pointer .
*@owner: the name of the owner .
*@name: the name of the variable .
*@age: the age of the dog .
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		(*d).owner = owner;
		(*d).name = name;
		(*d).age = age;
	}
}
