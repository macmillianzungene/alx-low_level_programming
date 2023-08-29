#ifndef LISTS_H
#define LIATS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * struct listint_s - singly linked
  *
  * @n: input integer
  * @next: input next node
  *
  * Describtion: linkedl linked node structure
  */
typedef struct listint_s *next
{
	int = n;
	struct listing_s *next
} listint_s

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

#endif
