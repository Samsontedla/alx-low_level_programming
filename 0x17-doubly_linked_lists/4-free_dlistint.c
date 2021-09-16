#include "lists.h"
/**
 *free_dlistint - function that frees dlistint_t
 *@head: pointer to head of dlistint_t
 *Returns: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp)
	{
		dlistint_t *next = temp->next;

		free(temp);
		temp = next;
	}
}
