#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * *add_nodeint_end - appends a node to a linked list
  * @head: pointer to the first node
  * @n: node data
  * Return: address of the new element or NULL
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
		last->next = new;
		return (new);
}
