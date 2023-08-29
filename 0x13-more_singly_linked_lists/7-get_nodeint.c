#include "lists.h"

/**
  * get_nodeint_at_index - function that returns the nth node of a listint_t
  *
  * @head: input pointer
  * @index: input node index
  *
  * Return: results
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;
	return (node);
}
