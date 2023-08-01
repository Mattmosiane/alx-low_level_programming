#include "lists.h"

/**
 * free_listint2 - function that frees a list and set head to NULL
 * @head: pointer to listint_t struct
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *zim;

	if (head == NULL)
		return;

	zim = *head;
	while (*head)
	{
		zim = *head;
		(*head) = (*head)->next;
		free(zim);
	}
	*head = NULL;
}
