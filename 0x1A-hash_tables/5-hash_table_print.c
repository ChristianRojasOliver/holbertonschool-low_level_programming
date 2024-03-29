#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *aux_node;
unsigned long int i;
char *coma = "";

if (ht)
{
printf("{");
for (i = 0; i < ht->size; i++)
{
aux_node = ht->array[i];
while (aux_node != NULL)
{
printf("%s", coma);
coma = ", ";

if (aux_node->key)
printf("'%s': '%s'", aux_node->key, aux_node->value);

aux_node = aux_node->next;
}
}
printf("}\n");
}
}
