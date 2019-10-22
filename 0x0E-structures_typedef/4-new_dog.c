#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - Creates a new instance of a struct
 * @name: A string representing the name of a dog
 * @age: An integer representing then age of a dog
 * @owner: A string representing the name of a dog owner
 * Return: A pointer to dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *d_name;
	char *d_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d_owner = _strcpy(owner);
	if (d_owner == NULL)
	{
		free(d);
		return (NULL);
	}
	d_name = _strcpy(name);
	if (d_name == NULL)
	{
		free(d_owner);
		free(d);
		return (NULL);
	}
	d->name = d_name;
	d->age = age;
	d->owner = d_owner;
	return (d);
}
/**
 * _strlen - Calculates the length of a string
 * @s: string
 * Descripion: Calculates the lenght of a string
 * Return: An integer representing the lenght of a string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0 ; s[a] ; a++)
	{

	}
	return (a);
}

/**
 * _strcpy - create a copy of a string
 * @src: Contains the original string
 * Return: Gives back the copy of string
 */
char *_strcpy(char *src)
{
	int z;
	int a;
	char *dest;

	a = _strlen(src);
	dest = malloc(sizeof(char) * a + 1);
	if (dest == NULL)
		return (NULL);

	for (z = 0; src[z] != '\0' ; z++)
		dest[z] = src[z];
	dest[z] = '\0';
	return (dest);
}
