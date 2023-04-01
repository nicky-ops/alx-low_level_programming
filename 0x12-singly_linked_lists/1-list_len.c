#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - returns the number of elements in linked list
  * @h: pointer to a list
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	int i;

	while (h)
	{
		i = i + 1;
		h = h->next;
	}
	return (i);
}
