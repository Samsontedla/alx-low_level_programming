#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: A pointer to the address of the head.
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2 = *head;
	unsigned int i = 0;

	if (temp2 == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp2);
		return (1);
	}

	for (; i < (index - 1); i++)
	{
		if (temp2->next == NULL)
			return (-1);

		temp2 = temp2->next;
	}

	temp = temp2->next;
	temp2->next = temp->next;
	free(temp);
	return (1);
}
