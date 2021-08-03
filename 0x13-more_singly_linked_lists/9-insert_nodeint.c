#include "lists.h"
#include <stdlib.h>
/**
 *insert_nodeint_at_index - function that inserts a new node at given position
 *@head: pointer to head of linked list
 *@idx: the index of the list where the new node should be added
 *@n: data of new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp1, *temp2 = *head;
	unsigned int i = 0;

	temp1 = malloc(sizeof(listint_t));
	if (temp1 == NULL)
		return (NULL);

	temp1->n = n;

	if (idx == 0)
	{
		temp1->next = temp2;
		*head = temp1;
		return (temp1);
	}

	for (; i < (idx - 1); i++)
	{
		if (temp2 == NULL || temp2->next == NULL)
			return (NULL);

		temp2 = temp2->next;
	}

	temp1->next = temp2->next;
	temp2->next = temp1;

	return (temp1);
}
