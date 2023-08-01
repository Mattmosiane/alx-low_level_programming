#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts at the given
 * index
 * @head: pointer to listint_t struct
 * @idx: index of the list
 * @n: integer data for new node
 * Return: address to new node at specific index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 1;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->n = n;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (x < idx)
	{
		temp = temp->next;
		x++;
	}

	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
