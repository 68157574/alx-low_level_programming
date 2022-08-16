#include <stdlib.h>
#include "lists.h"



/**
* reverse_listint - Reverse a given list
* @head: Pointer to a pointer to the list
* Return: Address of head
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *p;
listint_t *n;
p = NULL;
n = NULL;
while (*head != NULL)
{
n = (*head)->next;
(*head)->next = p;
p = *head;
*head = n;
}
*head = p;
return (*head);
}
