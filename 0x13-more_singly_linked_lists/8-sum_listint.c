#include "lists.h"
/**
 *sum_listint - function that returns the sum of all the data(n) of a listint_t
 *@head: pointer to head of linked list
 *Return: Sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		temp = head->next;
		while (temp != NULL)
		{
			sum = sum + temp->n;
			temp = temp->next;
		}
		head = temp;
	}
	return (sum);
}
