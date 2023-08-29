#include "lists.h"
#include <stdlib.h>

/**
  * find_listint_loop_fl - locating the loop in a list
  *
  * @head: input pointer
  *
  * Return: results
  */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}


/**
  * free_listint_safe - function that frees a listint_t list.
  *
  * @h: input value
  *
  * Return: results
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *node;
	size_t len;
	int rnd = 1;

	if (h == NULL || *h == NULL)
		return (0);

	node = find_listint_loop_fl(*h);
	for (len = 0; (*h != node || rnd) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == node && rnd)
		{
			if (node == node->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			rnd = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
