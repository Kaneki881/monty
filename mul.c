#include "monty.h"

/**
 * mul - Multiplies the top two elements of the stack.
 * @stack: Double pointer to the stack (doubly linked list).
 * @line_number: Line number where the swap opcode is encountered.
 * Return: No return value
 */
void mul(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n *= (*stack)->n;
    pop(stack, line_number);
}
