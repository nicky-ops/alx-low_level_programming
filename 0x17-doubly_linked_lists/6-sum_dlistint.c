#include "lists.h"
/**
  * sum_dlistint - function sums all the data of a doubly,
  * linked list
  * @head: pointer to a doubly linked list
  * Return: sum
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		count++;
		current = current->next;
	}
	return (sum);
}
