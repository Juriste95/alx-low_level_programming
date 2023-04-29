#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 *
 * @head: A pointer to a pointer to the head node of the linked list.
 *
 * Return: The data of the head node that was deleted, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int data;

    /* Check if the list is empty */
    if (*head == NULL)
        return (0);

    /* Save the data of the head node */
    data = (*head)->n;

    /* Delete the head node */
    temp = *head;
    *head = (*head)->next;
    free(temp);

    /* Return the data of the head node */
    return (data);
}
