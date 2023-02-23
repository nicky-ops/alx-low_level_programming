#include "main.h"
/**
 * _islower - checks for lowercase letters
 * Return: 0 (Success)
 * @c: parameter
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
