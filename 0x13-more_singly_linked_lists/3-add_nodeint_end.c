#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node to the end of
 * list
 * @head: pointer to list struct
 * @n: integer
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *zim;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		zim = *head;
		while (zim->next)
			zim = zim->next;
		zim->next = new_node;
	}
	return (new_node);
}
