#include "lists.h"

/**
 * get_nodeint_at_index - function that gets a node of list at
 * specific index
 * @head: pointer to listint_t struct
 * @index: index of the node
 * Return: pointer to node at specific index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (x == index)
			return (head);
		head = head->next;
		x++;
	}
	return (NULL);
}
