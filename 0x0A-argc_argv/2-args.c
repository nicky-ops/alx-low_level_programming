#include <stdio.h>

/**
  * main - prints all the arguments
  * @argc: integer  number of arguments
  * @argv: array of strings passed as arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
