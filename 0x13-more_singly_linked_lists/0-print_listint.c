#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all elements in the list
 * @h: pointer to list in structure
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
