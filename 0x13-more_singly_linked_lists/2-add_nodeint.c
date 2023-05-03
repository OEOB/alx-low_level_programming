#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer.
 * @n: integer to be added to the new node.
 *
 * Return: new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node_1;

if (head == NULL)
return (NULL);

node_1 = malloc(sizeof(listint_t));
if (node_1 == NULL)
return (NULL);

node_1->n = n;
node_1->next = *head;
*head = node_1;

return (node_1);
}
