#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int abc, int x)
{
	dlistint_t *new;
	dlistint_t *head;
	unsigned int y;

	new = NULL;
	if (abc == 0)
		new = add_dnodeint(h, x);
	else
	{
		head = *h;
		y = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (y == abc)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, x);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = x;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			y++;
		}
	}

	return (new);
}
