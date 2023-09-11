#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a new data type struct dog
 * @name: First member, a pointer to a char (string) for the dog's name
 * @age: Second member, a float for the dog's age
 * @owner: Third member, a pointer to a char (string) for the dog's owner
 *
 * Description: A new type struct dog that contains three members:
 * - name, a string, is the name of the dog
 * - age, a float, is the age of the dog
 * - owner, a string, is the name of the owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
