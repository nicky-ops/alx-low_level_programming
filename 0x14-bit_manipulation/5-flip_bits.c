#include "main.h"

/**
  * flip_bits - returns the no of bits that need to be flipped,
  * to get from one no to another
  * @n: number to flip
  * @m: no to be flipped to
  * Return: unsigned integer
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, increment = 0, len;
	unsigned long int difference, j = 1;

	difference = n ^ m;
	len = sizeof(unsigned long int) * 8;
	for (i = 0;i < len;i++)
	{
		if (j == (difference & j))
		{
			increment++;
		}
		j <<= 1;
	}
	return (increment);
}
