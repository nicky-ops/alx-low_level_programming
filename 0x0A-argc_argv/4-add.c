#include <stdio.h>
#include <stdlib.h>
/**
  * main - adds positive numbers
  * @argc: integer number of parameters
  * @argv: array of characters
  * Return: 1 and 0
  */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("0\n");
		}
		else if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
