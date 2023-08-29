#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _r - it rellocates the memory
  *
  * @list: initial list
  * @size: initial size of the list
  * @new: input new node
  *
  * Return: results
  */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t a;

	newlist = malloc(size * sizeof(listint_t *));
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
  * print_listint_safe - function that prints a listint_t linked list.
  *
  * @head: input pointer
  *
  * Return: results
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t a, b = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (a = 0; a < b; a++)
		{
			if (head == list[a])
			{
				printf("-> {%p] %d\n", (void *)head, head->n);
				free(list);
				return (b);
			}
		}
		b++;
		list = _r(list, b, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (b);
}
