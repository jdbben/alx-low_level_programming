#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *user;
user = malloc(sizeof(struct dog));
if (user == NULL)
return (NULL);
user->name = name;
user->age = age;
user->owner = owner;
return (user);
}
