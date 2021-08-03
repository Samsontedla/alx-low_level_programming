#include "lists.h"
/**
 *get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list
 *@head: head to linked list
 *@index: is the index of the node, starting at 0
 *Return: the nth node oR NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i <= index)
	{
		temp = head;
		head = head->next;
		i++;
	}
	return (temp);
}
