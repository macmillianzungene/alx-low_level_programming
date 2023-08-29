#include "lists.h"

/**
  * delete_nodeint_at_index -  function that deletes the node
  *
  * @head: input pointer
  * @index: input value
  *
  * Return: results
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *last_node;
	unsigned int a = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (a == index)
		{
			last_node->next = node->next;
			free(node);
			return (1);
		}
		a++;
		last_node = node;
		node = node->next;
	}
	return (-1);
}
