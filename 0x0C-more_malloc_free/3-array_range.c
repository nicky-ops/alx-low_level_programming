#include <stdlib.h>
#include "main.h"

/**
  * *array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: pointer to newly created array
  */

int *array_range(int min, int max)
{
	int *ptr, i, j;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * ((max - min)+1));

	for (i = 0; (i < (max-min + 1)); i++; min++)
	{
		ptr[i] = min;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
