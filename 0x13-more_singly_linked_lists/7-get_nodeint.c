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
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
