#include "lists.h"
/**
 *sum_dlistint - ffunction that returns the sum of
 *		all the data (n) of a dlistint_t linked list
 *@head: pointer to head of dlistint_t
 *Return: sum of all data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	if (temp == NULL)
		return (sum);
	while (temp->next != NULL)
	{
		temp = temp->next;
		sum += temp->n;
	}
	return (sum);
}
