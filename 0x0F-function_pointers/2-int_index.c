#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * int_index - return index of the first element for,
  * which the @cmp function does not return 0
  * @array: pointer to the array
  * @size: no of elements in the array
  * @cmp: pointer to the function to be used to compare,
  * values
  * Return: int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, e;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			e = cmp(array[i]);
			if (e)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
