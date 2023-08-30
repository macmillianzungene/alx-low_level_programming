#include "lists.h"
#include <stdlib.h>

/**
  * _r - relocating the memory
  *
  * @list: initial list
  * @size: initial size
  * @new: input node
  *
  * Return: results
  */
listint_t **_r(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t a;

	newlist = maloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (a = 0; a < size - 1; a++)
		newlist[a] = list[a];
	newlist[a] = new;
	free(list);
	return (newlist);
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
	listint_t **list = NULL;
	listint_t *next;
	size_t a, rnd = 0;

	if (h == NULL || *h == NULL)
		return (rnd);
	while (*h != NULL)
	{
		for (a = 0; a < rnd; a++)
		{
			if (*h == list[a])
			{
				*h = NULL;
				free(list);
				return (rnd);
			}
		}
		rnd++;
		list = _r(list, rnd, *h);
		next = (*h);
		*h = next;
	}
	free(list);
	return (rnd);
}
