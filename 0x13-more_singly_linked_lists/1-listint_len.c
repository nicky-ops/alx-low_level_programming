#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * listint_len - function returns no of elements in a,
  * linked list
  * @h: linked list
  * Return: number of elements
  */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
