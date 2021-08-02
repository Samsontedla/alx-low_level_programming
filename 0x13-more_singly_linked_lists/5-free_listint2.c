#include "lists.h"
#include <stdlib.h>
/**
 *free_listint2 - function that frees listint_t
 * and sets the head to NULL
 *@head: pointer to header
 *Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
