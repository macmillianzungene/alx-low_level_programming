#include "lists.h"
#include <stdlib.h>

/**
  * add_node - function that adds a new node at the beginning of a list_t list.
  *
  * @head: input address
  * @str: input string
  *
  * Return: results
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *_head = malloc(sizeof(list_));

	if (!head || !_head)
		return (NULL);
	if (str)
	{
		_head->str = strdup(str);
		if (!_head->str)
		{
			free(_head);
			return (NULL);
		}
		_head->len = _strlen(_head->str);
	}

	_head->next = *head;
	*head = _head;
	return (_head);
}
