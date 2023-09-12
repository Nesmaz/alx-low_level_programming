#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int _strlen(const char *str);
char *_strcpy(char *dest, char *src);
/**
 * _strlen - counts the length of a string
 * @str: the string to be measured
 * Return: the length of the string
*/
int _strlen(const char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	return (len);
}
/**
 * _strcpy - copies a string
 * @dest: the destenation where the string will be copied
 * @src: the string to be copied
 * Return: a pointer to the copied string
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog with the given name, age, and owner
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: a pointer to the new dog, or NULL if an error occurred
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || !owner || age < 0)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	if (!dog->name || !dog->owner)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);

		return (NULL);
	}

	return (dog);
}

