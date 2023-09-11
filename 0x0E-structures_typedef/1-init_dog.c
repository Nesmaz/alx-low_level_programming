#include <stdio.h>
#include "main.h"
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to a char (string) for the dog's name
 * @age: A float for the dog's age
 * @owner: Pointer to a char (string) for the dog's owner
 *
 * Description: This function takes in a pointer to a struct dog,
 * and pointers to the name and owner strings, and a float for the age
 * It then initializes the struct dog with these values
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
