#include "hash_tables.h"

/**
 * key_index - Calculates the index for a given key in the hash table.
 * @key: The key to calculate the index for.
 * @size: The size of the array in the hash table.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Calculate the hash value using the djb2 hash function */
	hash_value = hash_djb2(key);

	/* Use the modulo operator to get the index within the array size */
	return (hash_value % size);
}
