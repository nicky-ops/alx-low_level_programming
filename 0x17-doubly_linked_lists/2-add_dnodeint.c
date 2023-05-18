#include "lists.h"
/**
  * add_dnodeint - adds a new node at the beginning of a,
  * doubly linked list
  * @head: pointer to a doubly linked list
  * @n: value to be added
  * Return: 0 on success
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;
	return (newNode);
}
