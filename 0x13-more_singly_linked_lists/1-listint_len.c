#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the number of elements in
 * a linked list_t list
 * @h: pointer to listint_t struct
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
