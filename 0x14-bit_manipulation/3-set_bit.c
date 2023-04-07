#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: pointer to the number
  * @index: index of the bit you want to set
  * Return: 1 or -1
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s_value;
	unsigned int k = sizeof(unsigned long int) * 7;

	if (index > k)
	{
		return (-1);
	}

	s_value = 1 << index;
	*n = *n | s_value;

	return (1);
}


