#include "main.h"

/**
  * int factorial(int n) - returns factorial of a given number
  * @n positive integer
  * return: factorial of a number of type int
  */

int factorial(int n)
{
	if (n==0)
	{
		return (1);
	}
	if (n==1)
	{
		return(1);
	}
	return n*factorial(n-1);
}

