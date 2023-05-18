#include "lists.h"
/**
  * dlistint_len - return the elements of a doubly linked,
  * list
  * @h: pointer to a doubly linked list
  * Return: 0 on success
  */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
