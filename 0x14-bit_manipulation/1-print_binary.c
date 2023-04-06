#include "main.h"

/**
  * print_binary - prints binary representation of a number
  * @n: number to be represented in binary
  * Return: void
  */
void print_binary(unsigned long int n)
{
	int bits[32];
	int i = 0, j = 0;

	if (n == 0)
	{
		_putchar('0');
	}

	for ( ; n > 0; )
	{
		bits[i++] = n % 2;
		n /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(bits[j]);
	}
}
