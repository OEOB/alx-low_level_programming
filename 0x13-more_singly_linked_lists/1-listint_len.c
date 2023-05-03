#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t number = 0;

while (h != NULL)
{
number = number + 1;
h = h->next;
}
return (number);
}
