#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a list
 * @head: pointer to list_t struct
 * @n: integer
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
