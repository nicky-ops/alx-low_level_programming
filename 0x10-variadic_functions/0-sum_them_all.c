#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
  * sum_them_all - returns sum of all its parameters
  * @n: required argument
  * Return: int
  */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
