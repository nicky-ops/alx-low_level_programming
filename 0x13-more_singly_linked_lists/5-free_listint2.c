#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - function frees a listint_t list
  * @head: pointer to a pointer
  * Return: void
  */
void free_listint2(listint_t **head)
{
	free(*head);
	head = NULL;
}
