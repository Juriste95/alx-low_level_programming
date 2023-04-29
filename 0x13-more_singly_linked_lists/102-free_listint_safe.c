#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 *
 * @h: Pointer to a pointer to the head node of the list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *tmp;

	if (h == NULL || *h == NULL)
		return (size);

	while (*h != NULL)
	{
		size++;
		if (*h <= (*h)->next)
		{
			free(*h);
			break;
		}
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}

	*h = NULL;

	return (size);
}
