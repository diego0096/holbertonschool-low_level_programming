#ifndef MCDOG
#define MCDOG

/**
 * struct dog - Defines dogs attributes
 * @name: A string for the dogs name
 * @age: An integer for the dogs age
 * @owner: A string for the owners name
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *src);
void free_dog(dog_t *d);

#endif
