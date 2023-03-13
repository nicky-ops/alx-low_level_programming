#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two numbers
  * @argc: integer number of parameters
  * @argv: array of characters
  * Return: 1 and 0
  */
int main(int argc, char *argv[])
{
	int  multiple = 0;

	if (argc == 3)
	{
		multiple = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiple);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
