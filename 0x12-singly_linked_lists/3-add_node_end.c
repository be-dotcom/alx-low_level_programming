#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of list_t
* @head: double pointer to list_t
* @str: string to the new node
*
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *s;
list_t *temp = *head;
unsigned int len = 0;

while (str[len])
len++;

s = malloc(sizeof(list_t));
if (!s)
return (NULL);

s->str = strdup(str);
s->len = len;
s->next = NULL;

if (*head == NULL)
{
*head = s;
return (s);
}

while (temp->next)
temp = temp->next;

temp->next = s;

return (s);
}

