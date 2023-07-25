#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created sorted hash table,
 *         or NULL if something went wrong.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (!ht)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (!ht->array)
    {
        free(ht);
        return (NULL);
    }

    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table to add/update the key-value pair.
 * @key: The key to add to the sorted hash table.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new_node, *current_node;
    unsigned long int index;

    if (!ht || !key || strlen(key) == 0 || !value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    current_node = ht->shead;

    while (current_node)
    {
        if (strcmp(current_node->key, key) == 0)
        {
            free(current_node->value); /* Free existing value */
            current_node->value = strdup(value); /* Duplicate and update value */
            return (1); /* Update successful */
        }
        current_node = current_node->snext;
    }

    /* Key not found, create a new node and add it to the sorted list */
    new_node = malloc(sizeof(shash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    new_node->sprev = NULL;
    new_node->snext = ht->shead;

    if (ht->shead)
        ht->shead->sprev = new_node;

    ht->shead = new_node;
    if (!ht->stail)
        ht->stail = new_node;

    ht->array[index] = new_node;

    return (1); /* Successfully added new key-value pair */
}

/**
 * shash_table_get - Retrieves the value associated with a key in the sorted hash table.
 * @ht: The sorted hash table to look into.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if key couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *current_node;
    unsigned long int index;

    if (!ht || !key || strlen(key) == 0)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    current_node = ht->array[index];

    while (current_node)
    {
        if (strcmp(current_node->key, key) == 0)
        {
            return (current_node->value);
        }
        current_node = current_node->next;
    }

    return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The sorted hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;
    int first_pair = 1;

    if (!ht)
        return;

    printf("{");
    for (node = ht->shead; node; node = node->snext)
    {
        if (!first_pair)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        first_pair = 0;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: The sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *node;
    int first_pair = 1;

    if (!ht)
        return;

    printf("{");
    for (node = ht->stail; node; node = node->sprev)
    {
        if (!first_pair)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        first_pair = 0;
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *node, *temp;
    unsigned long int i;

    if (!ht)
        return;

    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node)
        {
            temp = node;
            node = node->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }

    free(ht->array);
    free(ht);
}
