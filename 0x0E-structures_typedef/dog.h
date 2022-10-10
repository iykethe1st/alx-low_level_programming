#ifndef DOG_H
#define DOG_H
/**
 * dog_t - new type for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - structure definition of a dog
 *
 * @name: name of dog
 *
 * @age: age of dog
 *
 * @owner: owner of dog
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);




#endif
