#include "monty.h"
/**
 * f_queue - It prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - It add node to the tail stack
 * @new_n_val: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int new_n_val)
{
	stack_t *new_n, *aux;

	aux = *head;
	new_n = malloc(sizeof(stack_t));
	if (new_n == NULL)
	{
		printf("Error\n");
	}
	new_n->n = new_n_val;
	new_n->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_n;
		new_n->prev = NULL;
	}
	else
	{
		aux->next = new_n;
		new_n->prev = aux;
	}
}
