#include "lists.h"
#include <stdlib.h>
/**
 *free_listint - function that frees a listint_t list
 *@head: pointer to head
 *Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
