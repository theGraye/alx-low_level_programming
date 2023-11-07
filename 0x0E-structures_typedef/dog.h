#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct creates dog info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
