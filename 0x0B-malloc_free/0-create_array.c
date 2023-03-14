#include "main.h"
#include <stdlib.h>
/**
  * *create_array - creates an array of chars and
  * @size: size of array
  * @c: char to initialize the array
  * Return: pointer (Success), NULL (Error)
  */

char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	pt = (char *)malloc(size * sizeof(char));

	if (pt == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		pt[i] = c;
		i++;
	}

	pt[i] = '\0';

	return (pt);
}
