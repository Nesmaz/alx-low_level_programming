/**
 * new_dog - creates a new dog with the given name, age, and owner
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the new dog, or NULL if an error occurred
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	if (!name || !owner)
	{
		return (NULL);
	}

	dog_t *dog = calloc(1, sizeof(dog_t));

	if (!dog)
	{
		return (NULL);
	}

	dog->name = strdup(name);
	dog->age = age;
	dog->owner = strdup(owner);

	if (!dog->name || !dog->owner)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);

		return (NULL);
	}

	return (dog);
}

