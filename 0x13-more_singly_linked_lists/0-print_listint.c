#include "lists.h"

/**
  * print_listint - function that prints all the elements of a listint_t
  *
  * @h: input pointer
  *
  * Return: results
  */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (a);
}
