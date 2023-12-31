#include "monty.h"

/**
 * push - adds a new node at the start of a doubly linked list
 * @stack: address of the stack of the list
 * @line_number: current line number
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	int i = 0;
	char *alt = NULL;

	if (!carry_var.arg)
		clean_exit(*stack, "push_no_int", NULL, line_number);

	alt = carry_var.arg;
	if (carry_var.arg[0] == '-')
		alt++;

	for (i = 0; alt[i]; i++)
		if (!isdigit(alt[i]))
			clean_exit(*stack, "push_no_int", NULL, line_number);

	if (stack)
		temp = malloc(sizeof(stack_t));

	if (!temp)
		clean_exit(*stack, "malloc", NULL, line_number);

	temp->n = atoi(alt);
	if (carry_var.arg[0] == '-')
		temp->n = -temp->n;

	temp->next = *stack;
	temp->prev = NULL;
	if (*stack)
		(*stack)->prev = temp;

	*stack = temp;
}
