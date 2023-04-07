#include "main.h"
#include <string.h>
#include <math.h>

/**
  * get_bit - returns the value of a bit at a given index
  * @n: number to be chaecked
  * @index: index starting from 0 of the wanted bit
  * Return: value of hte bit at index or -1
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, j;
	unsigned int k = sizeof(unsigned long int) * 8 - 1;

	if (index > k)
	{
		return (-1);
	}

	i = 1 << index;
	j = n & i;

	if (j == k)
	{
		return (1);
	}
	return (0);
}
