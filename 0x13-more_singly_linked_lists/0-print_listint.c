#include "lists.h"

/**
 * print_listint - Print elements of list_int 
 * @h: data type pointer of struct
 * Return: elements of the str i
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *new_node = h;

	for (; new_node; new_node = new_node->next)
	{
		printf("%d\n", new_node->n);
		i++;
	}
	return (i);
}
