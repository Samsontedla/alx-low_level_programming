#include "lists.h"
#include <stdio.h>
/**
 *print_listint - function that prints all the elements of a listint_t
 *@h: list to be printed
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h)
	{
		if (h->n != '\0')
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		node++;
	}
	return (node);
}
