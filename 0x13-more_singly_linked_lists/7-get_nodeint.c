#include <stdlib.h>
#include "lists.h"

/**
  * *get_nodeint_at_index - returns the nth node of a linked list
  * @head: pointer to the first node
  * @index: index of the nth node
  * Return: nth node of litint_t linked list
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		count++;
		if (count == index)
		{
			break;
		}
		head = head->next;
	}
	return (head);
}
