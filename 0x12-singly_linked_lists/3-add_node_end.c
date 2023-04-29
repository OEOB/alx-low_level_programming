#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: The elements of a list_t list.
 * @str: String.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newelement;
list_t *temp = *head;

unsigned int len = 0;
while (str[len])
len++;
newelement = malloc(sizeof(list_t));
if (!newelement)

return (NULL);

newelement->str = strdup(str);
newelement->len = len;
newelement->next = NULL;
if (*head == NULL)
{
*head = newelement;

return (newelement);
}
while (temp->next)
temp = temp->next;

temp->next = newelement;
return (newelement);
}
