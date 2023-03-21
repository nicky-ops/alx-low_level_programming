#ifndef _DOG_H_
#define _DOG_H_

/**
  * struct dog - dog information
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
