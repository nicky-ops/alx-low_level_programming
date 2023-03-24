#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers
  * @n: no of arguments/parameters
  * @separator: const char string to be printed between,
  * numbers
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;
	va_list args;

	va_start(args, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			value = va_arg(args, int);
			printf("%d", value);
			printf("%s", separator);
		}
		printf("\n");
		va_end(args);
	}
}
