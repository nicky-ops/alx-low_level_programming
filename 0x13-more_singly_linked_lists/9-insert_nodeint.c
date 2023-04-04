#include "lists.h"
#include <stdlib.h>

/**
  * *insert_nodeint_at_index - insert a new node at a given,
  * position
  * @head: pointer to a header pointer
  * @idx: index of the list where node is added
  * @n: node data
  * Return: address of the new node or NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current = *head;
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	while (*head != NULL)
	{
		count++;
		if (count == idx)
		{
			new->n = n;
			new->next = *head;
			*head = new;
			break;
		}
		new->next = current->next;
		current->next = new;
	}
	return (new);
}

