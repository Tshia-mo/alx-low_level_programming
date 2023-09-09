#include "hash_tables.h"

/**
 * key_index - Function of key index of the current item
 * @key: Input
 * @size: Input
 *
 * Return: Index
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
