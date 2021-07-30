#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that returns the
 * number of elements in a linked list_t list
 * @h: linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 1;

	while (h->next != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
