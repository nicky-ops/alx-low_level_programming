#ifndef _LISTS_H_
#define _LISTS_H_
#include <stddef.h>

/**
  * struct list_s - structure definition
  * @str: string of elements to store data in linked list
  * @len: length of linked list
  * @next: pointer to the address of the next node
  */
typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
