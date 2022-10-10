#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 *
 * @name: dog name
 *
 * @age: dog age
 *
 * @owner: dog owner
 *
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dogg;
	int i, j, k;
	char *n, *o;

	dogg = malloc(sizeof(struct dog));
	if (dogg == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(dogg);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(dogg);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];
	dogg->name = n;
	dogg->age = age;
	dogg->owner = o;
	return (dogg);
}
