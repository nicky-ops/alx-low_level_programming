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
	listint_t *h = *head;
	int n;

	if (h != NULL)
	{
		*head = h->next;
		n = h->n;
		free(h);
	}
		return (n);
}
