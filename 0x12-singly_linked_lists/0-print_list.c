#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t
 * @h: singly linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 1;

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
