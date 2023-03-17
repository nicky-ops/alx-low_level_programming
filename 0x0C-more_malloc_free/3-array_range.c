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
	ptr = malloc(sizeof(int) * (max - min));

	for (i = 0; i <= max; i++)
	{
		for (j = min; j <= max; j++)
		{
			ptr[i] = ptr[j];
		}
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
