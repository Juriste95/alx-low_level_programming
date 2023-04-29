#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a
 *                            listint_t linked list.
 *
 * @head: A pointer to a pointer to the head node of the linked list.
 * @idx: The index of the list where the new node should be added, starting at 0.
 * @n: The data of the new node to be added.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *new_node, *prev_node, *current_node;

    /* Create a new node with the given data */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;

    /* If idx is 0, insert the new node at the beginning of the list */
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    /* Traverse the list to the node before the insertion point */
    prev_node = NULL;
    current_node = *head;
    for (i = 0; i < idx && current_node != NULL; i++)
    {
        prev_node = current_node;
        current_node = current_node->next;
    }

    /* If the insertion point is not found, free the new node and return NULL */
    if (i < idx || current_node == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Insert the new node at the insertion point */
    new_node->next = current_node;
    prev_node->next = new_node;

    /* Return a pointer to the new node */
    return (new_node);
}
