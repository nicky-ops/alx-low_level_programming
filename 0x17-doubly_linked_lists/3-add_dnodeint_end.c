#include "lists.h"
/**
  * add_dnodeint_end - adds a new node at the end of a,
  * doubly linked list
  * @head: pointer to a doubly linked list
  * @n: value to be added
  * Return: 0 on success
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *current;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
		newNode->prev = current;
	}
	return (newNode);
}
