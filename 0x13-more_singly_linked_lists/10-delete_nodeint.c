#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node at
 * specific index from list
 * @head: pointer to listint_t struct
 * @index: node to be deleted
 * Return: 1 on ssuccess, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *dnode;
	unsigned int x = 1;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (x < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			x++;
		}
		dnode = temp;
		dnode = dnode->next;
		temp->next = dnode->next;
		free(dnode);
	}
	return (1);
}
