#include "lists.h"

/**
  * insert_nodeint_at_index - function that inserts new node at given position
  *
  * @head: input pointer
  * @idx: input value
  * @n: input node
  *
  * Return: results
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node = malloc(sizeof(listint_t));
	unsigned int a = 0;

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	while (node)
	{
		if (a == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		a++;
		node = node->next;
	}
	free(new_node);
	return (NULL);
}
