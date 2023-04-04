#include "lists.h"

/**
 * listint_len - Return the number of elements in a linked listint_t list
 * @h: data type pointer of struct
 * Return: elements of the str x
 */
size_t listint_len(const listint_t *h)
{
	unsigned int x = 0;
	const listint_t *new_node = h;

	for (; new_node; new_node = new_node->next)
		x++;
	return (x);
}
