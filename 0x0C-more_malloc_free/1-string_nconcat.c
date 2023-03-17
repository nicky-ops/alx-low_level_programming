#include <stdlib.h>
#include "main.h"

/**
  * *string_nconcat - concatenates two strings
  * @s1: array of characters
  * @s2: array of characters
  * @n: number of bytes
  */

char *strign_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		*ptr = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));
	}
	else
	{
		*ptr = malloc(sizeof(char) * (strlen(s1) + n));
	}

	for (i = 0; i < strlen(ptr); i++)
	{
		for (j = 0; j < strlen(s1); j++)
		{
			ptr[i] = s2[j];
		}
		for (k = 0; k < strlen(s2); k++)
		{
			if (n >= strlen(s2))
			{
				ptr[i + j + 1] = s2[k];
			}
			else
			{
				for (l = 0; l <= n; l++)
				{
					ptr[i + j + k] = s2[l];
				}
			}
		}
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr[-1] = '\0';
	return (ptr);
}
