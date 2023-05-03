#include "lists.h"

/**
 * print_listint - prints the elements of a listint_t list.
 *
 * @h: A pointer.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t number = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
number++;
}

return (number);
}
