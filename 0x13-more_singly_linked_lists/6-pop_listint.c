#include "lists.h"

/**
 * pop_listint - function that deletes the head of a list
 * @head: pointer to listint_t  struct
 * Return: deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int x;

	if (*head == NULL)
		return (0);

	x = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (x);
}
