#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: pointer to listint_t struct
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *jim;

	while (head)
	{
		jim = head;
		head = head->next;
		free(jim);
	}
	free(head);
}
