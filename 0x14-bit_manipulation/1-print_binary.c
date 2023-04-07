#include "main.h"
#include <math.h>

/**
  * print_binary - prints binary representation of a number
  * @n: number to be represented in binary
  * Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int i, j;
	char k = 0;

	i = pow(2, sizeof(unsigned long int) * 8 - 1);

	while (i)
	{
		j = i & n;
		if (j == i)
		{
			k = 1;
			_putchar('1');
		}
		else if (k == 1 || i == 1)
		{
			_putchar('0');
		}
		i >>= 1;
	}
}
