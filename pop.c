#include "monty.h"
/**
 * pop - Removes the top element of the stack.
 * @stack: Double pointer to the stack (doubly linked list).
 * @line_number: Line number where the pop opcode is encountered.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
}
