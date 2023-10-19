#include "monty.h"

/**
 * push - Pushes an element to the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number in the file.
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t* newNode = (stack_t*)malloc(sizeof(stack_t));
	if (newNode == NULL) {
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newNode->n = line_number;
	newNode->next = *stack;
	*stack = newNode;
}
