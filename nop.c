#include "monty.h"
/**
 * nop - Doesn't do anything.
 * @stack: Double pointer to the stack (doubly linked list).
 * @line_number: Line number where the nop opcode is encountered.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
