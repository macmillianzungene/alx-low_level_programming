#include "main.h"

/**
  * free_listint2 - function that frees a listint_t list.
  *
  * @head: input pointer
  *
  * Return: results
  */
void free_listint2(listint_t **head)
{
	listint_t *node, *first;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		first = node;
		node = node->next;
		free(first);
	}
	*head = NULL;
}
