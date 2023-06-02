#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - adds a new node at the beginning of list_t
* @head: double pointer to the list_t
* @str: string to add in the node
* Return: the address of the new element, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *s;
unsigned int len = 0;

while (str[len])
len++;

s = malloc(sizeof(list_t));
if (!s)
return (NULL);

s->str = strdup(str);
s->len = len;
s->next = (*head);
(*head) = s;

return (*head);
}

