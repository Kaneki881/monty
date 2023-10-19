#include "monty.h"

/**
 * f_div - Divides the top two elements of the stack.
 * @stack: Double pointer to the stack (doubly linked list).
 * @line_number: Line number where the add opcode is encountered.
 * Return: No return value
 */
void div_stack(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    if ((*stack)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n /= (*stack)->n;
    pop(stack, line_number);
}
