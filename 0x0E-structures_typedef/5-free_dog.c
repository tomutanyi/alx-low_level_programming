#include "dog.h"

/**
 * free_dog - function that emancipates dogs .
 * @d: a pointer to the emancipated .
 * Return: always (0)
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
