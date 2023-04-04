#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - function returns sum of all the data of list
  * @head: pointer to the first node
  * Return: sum of all the data
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
