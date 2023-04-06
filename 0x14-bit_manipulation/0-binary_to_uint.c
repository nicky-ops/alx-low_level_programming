#include "main.h"

/**
  * binary_to_uint - converts a binary number to unsigned int
  * @b: pointer to a string of 0 and 1 chars
  * Return: converted number or 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_num = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] == '0' || b[i] == '1')
	{
		converted_num <<= 1;
		converted_num += b[i] - '0';
		i += 1;
	}
	return (converted_num);
}
