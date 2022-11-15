#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
*struct dog - a struct representing dog .
*@age: age of dog .
*@name: name of dog .
*@owner: name of owner .
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
*dog_t - this is thee typedef for struct dog .
*/
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);


#endif
