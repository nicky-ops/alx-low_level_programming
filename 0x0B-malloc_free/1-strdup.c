#include "main.h"
#include <stdlib.h>

/**
  * *_strdup - returns a pointer to a newly allocated,
  * space in memory
  * @str: char string to duplicate
  * Return: pointer to @str (success), NULL (Error)
  */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
