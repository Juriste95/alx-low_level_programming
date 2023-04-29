#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a listint_t linked list.
 *
 * @head: A pointer to the head node of the linked list.
 *
 * Return: The sum of all the data of the linked list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
    int sum = 0;

    /* Traverse the list and add up the data */
    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }

    /* Return the sum */
    return (sum);
}
