#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_iterator - executes a function given as,
  * a parameter on each element of an array.
  * @array: pointer ot array
  * @size: size of the array
  * @action: pointer to the function to use
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
