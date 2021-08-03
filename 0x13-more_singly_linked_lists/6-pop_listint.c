#include "lists.h"
#include <stdlib.h>
/**
 *pop_listint - function that deletes the head node of a listint_t linked list
 *@head: pointer to head pointer of linked list
 *Return: the head node’s data (n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);

	ret = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (ret);
}
