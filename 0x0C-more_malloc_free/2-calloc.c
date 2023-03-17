#include "main.h"
#include <stdlib.h>

/**
  * *_calloc - allocates memory for an array using malloc
  * @nmemb: number of elements
  * @size: size of bytes
  * Return: pointer to allocated memory, NULL
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
