#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * *add_nodeint - adds a new node at the beginning of a list
  * @head: pointer to the first element
  * @n: node data
  * Return: address of the new element or NULL
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	new->n = n;
	new->next = (*head);
	(*head) = new;

	if (new)
	{
		return (new);
	}
	else
	{
		return (NULL);
	}
}
