#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * pop_listint - function deletes the head node of a linked,
  * list listint_t
  * @head: double pointer
  * Return: head node's data (n)
  */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	if (h != NULL)
	{
		*head = h->next;
		n = h->n;
		free(h);
	}
		return (n);
}
