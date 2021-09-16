#include "lists.h"
/**
 *sum_dlistint - ffunction that returns the sum of
 *		all the data (n) of a dlistint_t linked list
 *@head: pointer to head of dlistint_t
 *Return: sum of all data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
