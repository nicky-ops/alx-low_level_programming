#include "lists.h"
/**
  * free_dlistint - frees a doubly linked list
  * @head: pointer to the list
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new = head;
	dlistint_t *next;

	while (new != NULL)
	{
		next = new->next;
		free(new);
		new = next;
	}
}
