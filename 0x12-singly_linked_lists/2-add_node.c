#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: head of linked list
 * @str: string value to be stored
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dupl;
	int len = 0;
	list_t *new;

	new = malloc(sizeof(size_t));
	if (new == NULL)
	{
		return (NULL);
	}

	dupl = strdup(str);
	if (dupl == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len])
		len++;

	new->str = dupl;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
