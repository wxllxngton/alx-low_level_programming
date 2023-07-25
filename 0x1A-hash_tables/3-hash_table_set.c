#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add/update the key-value pair.
 * @key: The key to add to the hash table.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node, *current_node;
    unsigned long int index;

    if (!ht || !key || strlen(key) == 0 || !value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    current_node = ht->array[index];

    while (current_node)
    {
        if (strcmp(current_node->key, key) == 0)
        {
            free(current_node->value); // Free existing value
            current_node->value = strdup(value); // Duplicate and update value
            return (1); // Update successful
        }
        current_node = current_node->next;
    }

    // Key not found, create a new node and add it to the beginning of the list
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1); // Successfully added new key-value pair
}
