#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning
 *            of a list_t list.
 *
 * @head: pointer to head pointer
 * @str: pointer to a String
 *
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	/* To get the length of the string */
	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);

	(*head) = new;

	return (*head);
}