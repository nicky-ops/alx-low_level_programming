#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - delete node at index of list
  * @head: pointer to a pointer of the first node
  * @index: index of node to delete
  * Return: 1 if succeded or -1 if failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *next;
	unsigned int i;

	current = *head;
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		free(*head);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (current->next != NULL)
		{
			current = current->next;
		}
		else
		{
			return (-1);
		}
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}

