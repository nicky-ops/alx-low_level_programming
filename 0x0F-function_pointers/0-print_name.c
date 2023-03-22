#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_name - prints a name
  * @name: character name variable
  * @f: void function pointer
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
