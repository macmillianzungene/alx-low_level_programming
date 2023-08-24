#include "lists.h"

/**
  * free_list - function that frees a list_t list.
  *
  * @head: input address
  *
  * Return: results
  */
void free_list(list_t *head)
{
	list_t *a, *_node;

	if (!head)
		return;

	a = head;
	while (a)
	{
		next_node = a->next;
		free(a->str);
		free(a);
		a = next_node;
	}
}
