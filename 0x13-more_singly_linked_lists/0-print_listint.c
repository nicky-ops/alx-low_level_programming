#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  * print_listint - function prints all elements of a list
  * @h: linked list
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
