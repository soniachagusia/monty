#include "monty.h"

/**
 * mul_nodes - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void mul_nodes(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		more_er(8, line_number, "mul");

	(*stack) = (*stack)->next;
	sum = (*stack)->number * (*stack)->prev->number;
	(*stack)->number = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}


/**
 * mod_nodes - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void mod_nodes(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)

		more_er(8, line_number, "mod");


	if ((*stack)->number == 0)
		more_er(9, line_number);
	(*stack) = (*stack)->next;
	sum = (*stack)->number % (*stack)->prev->number;
	(*stack)->number = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
