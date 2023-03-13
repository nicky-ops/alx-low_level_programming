#include <stdio.h>

/**
  * main - prints the number of arguments
  * @argc: integer  number of arguments
  * @argv: array of strings passed as arguments
  * Return: 0
  */
int main(int argc, __attribute__((unused)) char *argv[])
{
	argc--;
	{
		printf("%d\n", argc);
	}
	return (0);
}
