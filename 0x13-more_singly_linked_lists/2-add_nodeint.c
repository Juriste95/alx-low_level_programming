#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: A pointer to a pointer to the head node of the linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *last_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* Initialize the new node */
    new_node->n = n;
    new_node->next = NULL;

    /* If the list is empty, set the new node as the head node */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* Find the last node in the list */
    last_node = *head;
    while (last_node->next != NULL)
        last_node = last_node->next;

    /* Add the new node to the end of the list */
    last_node->next = new_node;

    /* Return the address of the new node */
    return (new_node);
}
