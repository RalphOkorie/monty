#include "monty.h"
/**
  *f_rotl- It rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tem = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tem->next != NULL)
	{
		tem = tem->next;
	}
	tem->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tem;
	(*head) = aux;
}
