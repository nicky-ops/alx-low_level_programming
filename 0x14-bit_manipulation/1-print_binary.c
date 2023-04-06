#include "main.h"

/**
  * print_binary - prints binary representation of a number
  * @n: number to be represented in binary
  * Return: void
  */
void print_binary(unsigned long int n)
{
	/*int i = 0;*/
	int output = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (n)
		{
			output = n % 2;
			n /= 2;
			printf("%d", output);
		}
	}
}
