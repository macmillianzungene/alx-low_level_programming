#include "lists.h"

/**
  * add_node_end - function that adds a new node at the end of a list_t
  *
  * @head: input address
  * @str: input string
  *
  * Return: results
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *_node = malloc(sizeof(list_t));
	list_t *a = *head;

	if (!head || !_node)
		return (NULL);
	if (str)
	{
		_node->str = strdup(str);
		if (!_node->str)
		{
			free(_node);
			return (NULL);
		}
		_node->len = _strlen(_node->str);
	}
	if (a)
	{
		while (a->next)
			a = a->next;
		a->next = _node;
	}
	else
		*head = _node;
	return (_node);
}
