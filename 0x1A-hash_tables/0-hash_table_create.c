#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table
 *
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table. If something went wrong,
 *         returns NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table;

	if (size < 1)
		return (NULL); /* invalid size */

	/* Attempt to allocate memory for the hash table structure */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}

	/* Attempt to allocate memory for the table itself */
	new_table->array = malloc(sizeof(void *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* Initialize elements of array to NULL */
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}

	new_table->size = size;

	return (new_table);
}

