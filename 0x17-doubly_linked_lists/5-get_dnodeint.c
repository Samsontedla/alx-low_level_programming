#include "lists.h"
/**
 *get_dnodeint_at_index - function that returns the nth
 *			node of a dlistint_t linked list
 *@head: pointer to head of linked list
 *@index: is the index of the node, starting from 0
 *Return: nth node or NUll if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
		if (count == index)
			return (temp);
	}
	return (NULL);
}
