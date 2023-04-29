#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 *
 * @head: A pointer to a pointer to the head node of the linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    /* Allocate memory for the new node */
    listint_t *new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        perror("malloc");
        return (NULL);
    }

    /* Initialize the new node */
    new_node->n = n;
    new_node->next = *head;

    /* Update the head pointer to point to the new node */
    *head = new_node;

    /* Return the address of the new node */
    return (new_node);
}
