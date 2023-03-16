#include "main.h"
#include <stdlib.h>

/**
  * *malloc_checked - function allocates memory using malloc
  * @b: unsigned integer number of bytes
  * @ptr: pointer to allocated memory
  * Return: int pointer to allocated memor
  */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(sizeof(*ptr) * b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
