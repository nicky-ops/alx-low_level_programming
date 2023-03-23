#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * op_add - Returns the sum of a and b
  * @a: integer parameter
  * @b: integer input parameter
  * Return: integer
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - returns the difference of a and b
  * @a: integer parameter
  * @b: integer input parameter
  * Return: int
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the sum of a and b
 * @a: integer parameter
 * @b: integer input parameter
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the sum of a and b
 * @a: integer parameter
 * @b: integer input parameter
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the sum of a and b
 * @a: integer parameter
 * @b: integer input parameter
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
