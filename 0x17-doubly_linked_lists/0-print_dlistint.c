#include "lists.h"
/**
  * print_dlistint - print all the elements of a doubly linked,
  * list
  * @h: pointer to a doubly linked list
  * Return: 0 on success
  */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t* current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	printf("%d\n", h->n);
	return (count);
}
