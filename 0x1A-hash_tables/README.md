# Hash Tables Module

This module provides implementations of basic hash tables and sorted hash tables in C. The basic hash table uses chaining for collision handling, and the sorted hash table maintains a linked list of key-value pairs sorted by key (ASCII value). 

## Data Structures

### Basic Hash Table
- `hash_table_t`: A structure representing the basic hash table.
- `hash_node_t`: A structure representing a node in the basic hash table.

### Sorted Hash Table
- `shash_table_t`: A structure representing the sorted hash table.
- `shash_node_t`: A structure representing a node in the sorted hash table.

## Functions

### Basic Hash Table Functions
- `hash_table_create`: Creates a basic hash table.
- `hash_table_set`: Adds a key-value pair to the basic hash table.
- `hash_table_get`: Retrieves the value associated with a key in the basic hash table.
- `hash_table_print`: Prints the basic hash table.
- `hash_table_delete`: Deletes the basic hash table.

### Sorted Hash Table Functions
- `shash_table_create`: Creates a sorted hash table.
- `shash_table_set`: Adds a key-value pair to the sorted hash table.
- `shash_table_get`: Retrieves the value associated with a key in the sorted hash table.
- `shash_table_print`: Prints the sorted hash table.
- `shash_table_print_rev`: Prints the sorted hash table in reverse order.
- `shash_table_delete`: Deletes the sorted hash table.

