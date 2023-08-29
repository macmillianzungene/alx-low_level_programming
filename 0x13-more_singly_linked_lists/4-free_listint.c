#include "lists.h"

/**
  * free_listint - function that frees a listint_t list.
  *
  * @head: input pointer
  *
  * Return: results
  */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}