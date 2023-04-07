#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: pointer to the number
  * @index: index of the bit you want to set starting from 0
  * Return: 1 or -1
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s_value;
	unsigned int k = sizeof(unsigned long int) * 7;

	if (index > k)
	{
		return (-1);
	}

	s_value = 0 >> index;
	*n = *n & s_value;

	return (1);
}


