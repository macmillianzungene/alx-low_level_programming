#ifndef HASH_TABLES
#define HASH_TABLES

#include <stdio.h>
#include <stdlib.h>

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: the size of the array
 * @array: pointer to the head node of the array
 */
typedef struct hash_table_s
{
    unsigned long int size;
    void **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);


#endif 
