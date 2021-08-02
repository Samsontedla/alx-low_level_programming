#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint_end - function that adds a new node at the end of list
 *@head: pointer to head of list
 *@n: element to be added
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
