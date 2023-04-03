#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_listint - function frees a listint_t list
  * @head: pointer to the first element
  * Return: void
  */

void free_listint(listint_t *head)
{
		free(head);
}
