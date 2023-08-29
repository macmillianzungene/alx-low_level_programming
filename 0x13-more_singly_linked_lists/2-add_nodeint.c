#include "lists.h"

/**
  * add_nodeint - function that adds a new node at the beginning of a listint_t
  *
  * @head: first node poinre
  * @n: input value
  *
  * Return: results
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node = malloc(sizeof(listint_t));

	if (!head || !first_node)
		return (NULL);

	first_node->next = NULL;
	first_node->n = n;
	if (*head)
		first_node->next = *head;
	*head = first_node;
	return (first_node);
}
