#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: This function takes in a pointer to a struct dog,
 * and prints its name, age, and owner. If an element of d is NULL,
 * it prints (nil) instead of this element. If d is NULL it prints nothing.
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL) 
		       	printf("(nil)\n");
		else
			printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
