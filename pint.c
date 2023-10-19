#include "monty.h"
/**
 * pint - Prints the value at the top of the stack.
 * @stack: Double pointer to the stack (doubly linked list).
 * @line_number: Line number where the pint opcode is encountered.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
