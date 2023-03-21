#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - consists of the details of a dog,
 * their name, age and owner
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
*/


{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
